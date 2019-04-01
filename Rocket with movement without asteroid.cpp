#include <windows.h>
#include <glut.h>
#include <iostream>
#include <time.h>

using namespace std;

static int score = 0;

float posX = -0.5, posY = -0.5, posZ = -0.5;
float inX = 0.0 ,inY = 0.0 ,inZ = 1.0;
float angle = 180;

int upperright;
int upperleft;
int top;
int bottom;
int yr=650;
int x1 = 600;
int y1 = 650;
int flag = 0;
int j = 0;
int k = 0;
int l = 0;
int m = 0;
int n = 0;
int o = 0;
int p = 0;
int q = 11;
int giveLife = 0;
int Life = 5;
int velocity = 14;

int globalr = 200;
int globalg = 0;
int globalb = 100;

float move_unit = 50;
int ballposition = 0;

int arr [12][4] = {1000, 0, 1080, 60, // 8  9
                  900, 0, 980, 60,   //  6  7
                  800, 0, 880, 60,   //  4  5
                  700, 0, 780, 60,   //  2  3
                  600, 0, 680, 60,   //  0  1
                  500, 0, 580, 60,     // -2 -1
                  400, 0, 480, 60,   // -4 -3
                  300, 0, 380, 60,   // -6 -5
                  200, 0, 280, 60,   // -8 -7
                  100, 0, 180, 60,   // -10 -9
                  0, 0, 80, 60,      // -11 -12
                  1100, 0, 1180, 60};     // life

void drawText (void * font, char *s, float x, float y){
     glRasterPos2f(x, y);
	 glColor3f(255, 0, 0);
     for (int i = 0; i < strlen (s); i++)
     glutBitmapCharacter (font, s[i]);
}

void drawNumber (void * font, int s,int spc, float x, float y){
     glRasterPos2f(x, y);
	 glColor3f(255, 0, 0);
     int k=0,j=0;
     while(s>9)
     {
        k=s%10;
        glRasterPos2f((x-(j*spc)), y);
        glutBitmapCharacter (font, 48+k);
        j++;glPushMatrix();
        glPopMatrix();
        s=s/10;
     }
    glRasterPos2f((x-(j*spc)), y);
    glutBitmapCharacter (font, 48+s);
}

void keyboard(int key, int x, int y)
{
	switch (key)
	{
        case GLUT_KEY_RIGHT:
        if(ballposition < 9)
           {
            x1 += move_unit;
            glutPostRedisplay();
            ballposition++;
            break;
           }else{break;}

        case GLUT_KEY_LEFT:
        if(ballposition > -12){
           x1 -= move_unit;
           glutPostRedisplay();
           ballposition--;
           break;
        }else{break;}

        default:
            break;
	}
}

void drawRocket()
{
    upperright=(25*3)+x1;
    upperleft=(2*3)+x1;
    top=-13*3+yr;
    bottom=0+yr;



glPushMatrix();

        //############ ROCKET BASE ############

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, bottom);//1  ################# BOTTOM #################
        glVertex2i((15*3)+x1, 1*3+yr);
        glVertex2i((14*3)+x1, 1*3+yr);
        glVertex2i((14*3)+x1, 0+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);//2
        glVertex2i((13*3)+x1, 0+yr);
        glVertex2i((13*3)+x1, 1*3+yr);
        glVertex2i((12*3)+x1, 0+yr);
        glVertex2i((12*3)+x1, 1*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);//3
        glVertex2i((13*3)+x1, 0+yr);
        glVertex2i((13*3)+x1, 6*3+yr);
        glVertex2i((12*3)+x1, (6*5)+yr);
        glVertex2i((12*3)+x1, 0+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*3)+x1, 0+yr);//4 double
        glVertex2i((11*3)+x1, 1*3+yr);
        glVertex2i((10*3)+x1, 1*3+yr);
        glVertex2i((10*3)+x1, 0+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, 1*3+yr);//5 double extend
        glVertex2i((15*3)+x1, 3*3+yr);
        glVertex2i((10*3)+x1, 3*3+yr);
        glVertex2i((10*3)+x1, 1*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*3)+x1, 3*3+yr);// 6 spine
        glVertex2i((14*3)+x1, 4*3+yr);
        glVertex2i((11*3)+x1, 4*3+yr);
        glVertex2i((11*3)+x1, 3*3+yr);

        glColor3ub (130, 84, 35);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*3)+x1, 6*3+yr);//7 spine extended
        glVertex2i((13*3)+x1, 9*3+yr);
        glVertex2i((12*3)+x1, 9*3+yr);
        glVertex2i((12*3)+x1, 6*3+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*3)+x1, 0*3+yr);//7.2 spine extended 2
        glVertex2i((13*3)+x1, -2*3+yr);
        glVertex2i((12*3)+x1, -2*3+yr);
        glVertex2i((12*3)+x1, 0*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*3)+x1, -2*3+yr);//7.3 spine extended 3
        glVertex2i((13*3)+x1, -3*3+yr);
        glVertex2i((12*3)+x1, -3*3+yr);
        glVertex2i((12*3)+x1, -2*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((10*3)+x1, 2*3+yr);
        glVertex2i((10*3)+x1, 4*3+yr);//8 left armor 1
        glVertex2i((9*3)+x1, 4*3+yr);
        glVertex2i((9*3)+x1, 2*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*3)+x1, 3*3+yr);//9 left armor 2
        glVertex2i((11*3)+x1, 5*3+yr);
        glVertex2i((10*3)+x1, 5*3+yr);
        glVertex2i((10*3)+x1, 3*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*3)+x1, 4*3+yr);//10 left armor 3
        glVertex2i((12*3)+x1, 6*3+yr);
        glVertex2i((11*3)+x1, 6*3+yr);
        glVertex2i((11*3)+x1, 4*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*3)+x1, 4*3+yr);//11 right armor 3
        glVertex2i((14*3)+x1, 6*3+yr);
        glVertex2i((13*3)+x1, 6*3+yr);
        glVertex2i((13*3)+x1, 4*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, 3*3+yr);//12 right armor 2
        glVertex2i((15*3)+x1, 5*3+yr);
        glVertex2i((14*3)+x1, 5*3+yr);
        glVertex2i((14*3)+x1, 3*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*3)+x1, 2*3+yr);//13 right armor 1
        glVertex2i((16*3)+x1, 4*3+yr);
        glVertex2i((15*3)+x1, 4*3+yr);
        glVertex2i((15*3)+x1, 2*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*3)+x1, 7*3+yr);//14 Body 1
        glVertex2i((12*3)+x1, 8*3+yr);
        glVertex2i((10*3)+x1, 8*3+yr);
        glVertex2i((10*3)+x1, 7*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*3)+x1, 6*3+yr);//14.2 Body 1 extend
        glVertex2i((12*3)+x1, 7*3+yr);
        glVertex2i((9*3)+x1, 7*3+yr);
        glVertex2i((9*3)+x1, 6*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*3)+x1, 2*3+yr);//15 Body 2
        glVertex2i((12*3)+x1, -3*3+yr);
        glVertex2i((11*3)+x1, -3*3+yr);
        glVertex2i((11*3)+x1, 2*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*3)+x1, 2*3+yr);//16 Body 3
        glVertex2i((14*3)+x1, -3*3+yr);
        glVertex2i((13*3)+x1, -3*3+yr);
        glVertex2i((13*3)+x1, 2*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, 7*3+yr);//17 body 4
        glVertex2i((15*3)+x1, 8*3+yr);
        glVertex2i((13*3)+x1, 8*3+yr);
        glVertex2i((13*3)+x1, 7*3+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((8*3)+x1, 6*3+yr);//17.2 body 4 extend
        glVertex2i((8*3)+x1, 7*3+yr);
        glVertex2i((23*3)+x1, 7*3+yr);
        glVertex2i((23*3)+x1, 6*3+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*3)+x1, 5*3+yr);//18 body joint left
        glVertex2i((11*3)+x1, 6*3+yr);
        glVertex2i((10*3)+x1, 6*3+yr);
        glVertex2i((10*3)+x1, 5*3+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*3)+x1, 6*3+yr);//19 body joint left
        glVertex2i((12*3)+x1, 7*3+yr);
        glVertex2i((11*3)+x1, 7*3+yr);
        glVertex2i((11*3)+x1, 6*3+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*3)+x1, 6*3+yr);//20 body joint right
        glVertex2i((14*3)+x1, 7*3+yr);
        glVertex2i((13*3)+x1, 7*3+yr);
        glVertex2i((13*3)+x1, 6*3+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, 5*3+yr);//21 body joint right
        glVertex2i((15*3)+x1, 6*3+yr);
        glVertex2i((14*3)+x1, 6*3+yr);
        glVertex2i((14*3)+x1, 5*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((6*3)+x1, 6*3+yr);//22 Wings left 1
        glVertex2i((6*3)+x1, 7*3+yr);
        glVertex2i((9*3)+x1, 7*3+yr);
        glVertex2i((9*3)+x1, 6*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((2*3)+x1, 6*3+yr);//23 Wings left 1
        glVertex2i((2*3)+x1, 7*3+yr);
        glVertex2i((6*3)+x1, 7*3+yr);
        glVertex2i((6*3)+x1, 6*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((6*3)+x1, 7*3+yr);//24 Wings left 2
        glVertex2i((6*3)+x1, 8*3+yr);
        glVertex2i((9*3)+x1, 8*3+yr);
        glVertex2i((9*3)+x1, 7*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*3)+x1, 6*3+yr);//25 Wings right 1
        glVertex2i((16*3)+x1, 7*3+yr);
        glVertex2i((19*3)+x1, 7*3+yr);
        glVertex2i((19*3)+x1, 6*3+yr);

        /*glColor3ub (99, 255, 205);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((19*3)+x1, 6*3+yr);//26 Wings right 1
        glVertex2i((19*3)+x1, 7*3+yr);
        glVertex2i((23*3)+x1, 7*3+yr);
        glVertex2i((23*3)+x1, 6*3+yr);*/

        /*glColor3ub (100,0,0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((25*3)+x1, 6*3+yr);//26 Wings right 1
        glVertex2i((25*3)+x1, 7*3+yr);
        glVertex2i((26*3)+x1, 7*3+yr);
        glVertex2i((26*3)+x1, 6*3+yr);*/

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*3)+x1, 7*3+yr);//27 Wings right 2
        glVertex2i((16*3)+x1, 8*3+yr);
        glVertex2i((19*3)+x1, 8*3+yr);
        glVertex2i((19*3)+x1, 7*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, 7*3+yr);//28 Wings right joint
        glVertex2i((15*3)+x1, 8*3+yr);
        glVertex2i((16*3)+x1, 8*3+yr);
        glVertex2i((16*3)+x1, 7*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((9*3)+x1, 7*3+yr);//29 Wings left joint
        glVertex2i((9*3)+x1, 8*3+yr);
        glVertex2i((10*3)+x1, 8*3+yr);
        glVertex2i((10*3)+x1, 7*3+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((19*3)+x1, 6*3+yr);//30 Wings right 1
        glVertex2i((19*3)+x1, 7*3+yr);
        glVertex2i((22*3)+x1, 7*3+yr);
        glVertex2i((22*3)+x1, 6*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*3)+x1, 0*3+yr);//31 Cockpit foundation left
        glVertex2i((15*3)+x1, -5*3+yr);
        glVertex2i((14*3)+x1, -5*3+yr);
        glVertex2i((14*3)+x1, 0*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*3)+x1, -3*3+yr);//31.2 Cockpit foundation left
        glVertex2i((14*3)+x1, -10*3+yr);
        glVertex2i((13*3)+x1, -10*3+yr);
        glVertex2i((13*3)+x1, -3*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*3)+x1, 0*3+yr);//32 Cockpit foundation right
        glVertex2i((11*3)+x1, -5*3+yr);
        glVertex2i((10*3)+x1, -5*3+yr);
        glVertex2i((10*3)+x1, 0*3+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*3)+x1, -3*3+yr);//32.2 Cockpit foundation right
        glVertex2i((12*3)+x1, -10*3+yr);
        glVertex2i((11*3)+x1, -10*3+yr);
        glVertex2i((11*3)+x1, -3*3+yr);

        glColor3ub (8, 163, 70);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*3)+x1, -3*3+yr);//33 Bridge
        glVertex2i((13*3)+x1, -9*3+yr);
        glVertex2i((12*3)+x1, -9*3+yr);
        glVertex2i((12*3)+x1, -3*3+yr);

        glColor3ub (129, 16, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*3)+x1, -9*3+yr);//34 Top of Bridge ################# TOP #################
        glVertex2i((13*3)+x1, top);
        glVertex2i((12*3)+x1, -13*3+yr);
        glVertex2i((12*3)+x1, -9*3+yr);

        //#################### BORDER ########################

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((2*3)+x1, 4*3+yr);//1 left wing ################# LEFT #################
        glVertex2i(upperleft, 9*3+yr);
        glVertex2i((0*3)+x1, 9*3+yr);
        glVertex2i((0*3)+x1, 4*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i((1*3)+x1, 9*3+yr);//2 left wing upper finish
        glVertex2i((1*3)+x1, 10*3+yr);
        glVertex2i((0*3)+x1, 10*3+yr);
        glVertex2i((0*3)+x1, 9*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i((1*3)+x1, 4*3+yr);//2 left wing upper finish
        glVertex2i((1*3)+x1, 3*3+yr);
        glVertex2i((0*3)+x1, 3*3+yr);
        glVertex2i((0*3)+x1, 4*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((6*3)+x1, 7*3+yr);//3 left wing upper cover
        glVertex2i((6*3)+x1, 8*3+yr);
        glVertex2i((2*3)+x1, 8*3+yr);
        glVertex2i((2*3)+x1, 7*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((10*3)+x1, 5*3+yr);//4 left wing lower cover
        glVertex2i((10*3)+x1, 6*3+yr);
        glVertex2i((2*3)+x1, 6*3+yr);
        glVertex2i((2*3)+x1, 5*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((9*3)+x1, 1*3+yr);//5 left Tail cover
        glVertex2i((9*3)+x1, 4*3+yr);
        glVertex2i((7*3)+x1, 4*3+yr);
        glVertex2i((7*3)+x1, 1*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((8*3)+x1, 0*3+yr);//6 left Tail cover
        glVertex2i((8*3)+x1, 1*3+yr);
        glVertex2i((7*3)+x1, 1*3+yr);
        glVertex2i((7*3)+x1, 0*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((10*3)+x1, 0*3+yr);//7 left Tail cover 2
        glVertex2i((10*3)+x1, 2*3+yr);
        glVertex2i((9*3)+x1, 2*3+yr);
        glVertex2i((9*3)+x1, 0*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*3)+x1, 0*3+yr);//8 right Tail cover 2
        glVertex2i((16*3)+x1, 2*3+yr);
        glVertex2i((15*3)+x1, 2*3+yr);
        glVertex2i((15*3)+x1, 0*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((18*3)+x1, 0*3+yr);//9 right Tail cover
        glVertex2i((18*3)+x1, 1*3+yr);
        glVertex2i((17*3)+x1, 1*3+yr);
        glVertex2i((17*3)+x1, 0*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((18*3)+x1, 1*3+yr);//10 right Tail cover
        glVertex2i((18*3)+x1, 4*3+yr);
        glVertex2i((16*3)+x1, 4*3+yr);
        glVertex2i((16*3)+x1, 1*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((23*3)+x1, 5*3+yr);//11 right wing lower cover
        glVertex2i((23*3)+x1, 6*3+yr);
        glVertex2i((15*3)+x1, 6*3+yr);
        glVertex2i((15*3)+x1, 5*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((23*3)+x1, 7*3+yr);//12 right wing upper cover
        glVertex2i((23*3)+x1, 8*3+yr);
        glVertex2i((19*3)+x1, 8*3+yr);
        glVertex2i((19*3)+x1, 7*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i((25*3)+x1, 9*3+yr);//13 right wing upper finish
        glVertex2i((25*3)+x1, 10*3+yr);
        glVertex2i((24*3)+x1, 10*3+yr);
        glVertex2i((24*3)+x1, 9*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i((25*3)+x1, 4*3+yr);//13 right wing upper finish
        glVertex2i((25*3)+x1, 3*3+yr);
        glVertex2i((24*3)+x1, 3*3+yr);
        glVertex2i((24*3)+x1, 4*3+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((25*3)+x1, 4*3+yr);//14 right wing ################# RIGHT #################
        glVertex2i(upperright, 9*3+yr);
        glVertex2i((23*3)+x1, 9*3+yr);
        glVertex2i((23*3)+x1, 4*3+yr);


        glEnd();




glutSwapBuffers();






        glFlush ();

}

void RandQuad()
{
    j = rand()%11;
    k = rand()%11;
    l = rand()%11;
    m = rand()%11;
    n = rand()%11;
    o = rand()%11;
    p = rand()%11;

    if(giveLife == 1)
        q = rand()%11;
    else
        q = 11;
}

void drawObject1()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[j][0],arr[j][1]);
    glVertex2i(arr[j][2],arr[j][1]);
    glVertex2i(arr[j][2],arr[j][3]);
    glVertex2i(arr[j][0],arr[j][3]);
    glEnd();
    glFlush();
}

void drawObject2()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[k][0],arr[k][1]);
    glVertex2i(arr[k][2],arr[k][1]);
    glVertex2i(arr[k][2],arr[k][3]);
    glVertex2i(arr[k][0],arr[k][3]);
    glEnd();
    glFlush();
}

void drawObject3()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[l][0],arr[l][1]);
    glVertex2i(arr[l][2],arr[l][1]);
    glVertex2i(arr[l][2],arr[l][3]);
    glVertex2i(arr[l][0],arr[l][3]);
    //glFlush();
    glEnd();
    glFlush();
}

void drawObject4()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[m][0],arr[m][1]);
    glVertex2i(arr[m][2],arr[m][1]);
    glVertex2i(arr[m][2],arr[m][3]);
    glVertex2i(arr[m][0],arr[m][3]);
    //glFlush();
    glEnd();
    glFlush();
}

void drawObject5()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[n][0],arr[n][1]);
    glVertex2i(arr[n][2],arr[n][1]);
    glVertex2i(arr[n][2],arr[n][3]);
    glVertex2i(arr[n][0],arr[n][3]);
    glEnd();
    glFlush();
}

void drawObject6()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[o][0],arr[o][1]);
    glVertex2i(arr[o][2],arr[o][1]);
    glVertex2i(arr[o][2],arr[o][3]);
    glVertex2i(arr[o][0],arr[o][3]);
    glEnd();
    glFlush();
}

void drawObject7()
{
    glBegin(GL_QUADS);
    glColor3ub (globalr,globalg,globalb);
    glVertex2i(arr[p][0],arr[p][1]);
    glVertex2i(arr[p][2],arr[p][1]);
    glVertex2i(arr[p][2],arr[p][3]);
    glVertex2i(arr[p][0],arr[p][3]);
    glEnd();
    glFlush();
}

void drawLife()
{
    glBegin(GL_QUADS);
    glColor3ub (255,0,0);
    glVertex2i(arr[q][0],arr[q][1]);
    glVertex2i(arr[q][2],arr[q][1]);
    glVertex2i(arr[q][2],arr[q][3]);
    glVertex2i(arr[q][0],arr[q][3]);

    glEnd();
    glFlush();
}

void drawFan(int xf1, int yf1)
{
    glBegin(GL_POLYGON);
	glColor3ub(rand()%255,rand()%255,rand()%255);
	glVertex2f(xf1,yf1);
	glVertex2f(xf1+60,yf1);
	glVertex2f(xf1+70,yf1+30);
	glVertex2f(xf1+60,yf1+60);
	glVertex2f(xf1,yf1+60);
	glVertex2f(xf1-10,yf1+30);
	glEnd();
	glFlush();
}

void drawScence()
{
    glPushMatrix();
    drawRocket();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject4();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject5();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject6();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawObject7();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawLife();
    glPopMatrix();
}

int militime = 0;
void update(int value)
{
    if(flag < 680)
    {
        if(militime % 500 == 0)
        {
            giveLife = 1;
        }
        flag += velocity;
    }
    else
    {
        RandQuad();
        flag = 0;
        giveLife = 0;
    }

	glutPostRedisplay();
	glutTimerFunc(20, update, militime++);
}

bool collision()
{
    if((ballposition == 8 || ballposition == 9) && ( j == 0 || k == 0 || l == 0 || m == 0 || n == 0 || o == 0 || p == 0 || q == 0) && flag > 679)
    {
        if(q != 0)
            return true;
        else if(q == 0)
        {
            if(Life < 5)
            {
                Life++;
            }
        return false;
        }
    }

    else if((ballposition == 6 || ballposition == 7) && ( j == 1 || k == 1 || l == 1 || m == 1 || n == 1 || o == 1 || p == 1 || q == 1) && flag > 679)
    {
        if(q != 1)
            return true;
        else if(q == 1)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == 4 || ballposition == 5) && ( j == 2 || k == 2 || l == 2 || m == 2 || n == 2 || o == 2 || p == 2 || q == 2) && flag > 679)
    {
        if(q != 2)
            return true;
        else if(q == 2)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == 2 || ballposition == 3) && ( j == 3 || k == 3 || l == 3 || m == 3 || n == 3 || o == 3 || p == 3 || q == 3) && flag > 679)
    {
        if(q != 3)
            return true;
        else if(q == 3)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == 0 || ballposition == 1) && ( j == 4 || k == 4 || l == 4 || m == 4 || n == 4 || o == 4 || p == 4 || q == 4) && flag > 679)
    {
        if(q != 4)
            return true;
        else if(q == 4)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == -1 || ballposition == -2) && ( j == 5 || k == 5 || l == 5 || m == 5 || n == 5 || o == 5 || p == 5 || q == 5) && flag > 679)
    {
        if(q != 5)
            return true;
        else if(q == 5)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == -3 || ballposition == -4) && ( j == 6 || k == 6 || l == 6 || m == 6 || n == 6 || o == 6 || p == 6 || q == 6) && flag > 679)
    {
        if(q != 6)
            return true;
        else if(q == 6)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == -5 || ballposition == -6) && ( j == 7 || k == 7 || l == 7 || m == 7 || n == 7 || o == 7 || p == 7 || q == 7) && flag > 679)
    {
        if(q != 7)
            return true;
        else if(q == 7)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == -7 || ballposition == -8) && ( j == 8 || k == 8 || l == 8 || m == 8 || n == 8 || o == 8 || p == 8 || q == 8) && flag > 679)
    {
        if(q != 8)
            return true;
        else if(q == 8)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == -9 || ballposition == -10) && ( j == 9 || k == 9 || l == 9 || m == 9 || n == 9 || o == 9 || p == 9 || q == 9) && flag > 679)
    {
        if(q != 9)
            return true;
        else if(q == 9)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else if((ballposition == -11 || ballposition == -12) && ( j == 10 || k == 10 || l == 10 || m == 10 || n == 10 || o == 10 || p == 10 || q == 10) && flag > 679)
    {
        if(q != 10)
            return true;
        else if(q == 10)
        {
            if(Life < 5)
            {
                Life++;
            }
            return false;
        }
    }

    else
    {
        return false;
    }
}

void myInit(void)
{
	glClearColor(0, 0, 0, 0);
	glColor3f(1, 1, 1);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1090, 800, 1.0);
}

void GameOver()
{
    myInit();
    drawText(GLUT_BITMAP_TIMES_ROMAN_24,"GAME OVER",500,400);
    drawText(GLUT_BITMAP_TIMES_ROMAN_24,"Your Score:",500,500);
    drawNumber(GLUT_BITMAP_TIMES_ROMAN_24,score,10,625,500);
}


void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    if(collision())
    {
        Life--;
    }

    else if(Life > 0)
    {
        if(flag > 679)
        {
            score++;
        }
        drawNumber(GLUT_BITMAP_TIMES_ROMAN_24,score,10,1020,150);
        drawText(GLUT_BITMAP_TIMES_ROMAN_24,"Score :",950,150);
        drawText(GLUT_BITMAP_TIMES_ROMAN_24,"Life :",950,100);
        drawNumber(GLUT_BITMAP_TIMES_ROMAN_24,Life,10,1000,100);
        drawScence();
    }

    else
    {
        GameOver();
    }

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1200, 700);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("Dodge The Asteroids!");
	glutDisplayFunc(myDisplay);
	myInit();
	glutTimerFunc(20, update, 0);
	glutSpecialFunc(keyboard);
	glutMainLoop();
	return 0;
}

