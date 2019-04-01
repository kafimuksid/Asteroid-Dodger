#include <windows.h>
#include <glut.h>
#include <iostream>
#include <time.h>
#include <mmsystem.h>



using namespace std;

static int score = 0;

int upperright;
int upperleft;
int top;
int bottom;
int yr=680;
int x1 = 600;
int y1 = 680;
int flag = 0;
int j = 0;
int k = 0;
int l = 0;
int m = 0;
int n = 0;
int o = 0;
int p = 0;
int q = 11;
int Life = 3;
int speed = 14;


float move_unit = 50;
int rposition = 0;

int arr [11][4] = {1000, 0, 1040, 40,
                  900, 0, 940, 40,
                  800, 0, 840, 40,
                  700, 0, 740, 40,
                  600, 0, 640, 40,
                  500, 0, 540, 40,
                  400, 0, 440, 40,
                  300, 0, 340, 40,
                  200, 0, 240, 40,
                  100, 0, 140, 40,
                  0, 0, 80, 40
};

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
        if(rposition < 9)
           {
            x1 += move_unit;
            glutPostRedisplay();
            rposition++;
            break;
           }else{break;}

        case GLUT_KEY_LEFT:
        if(rposition > -12){
           x1 -= move_unit;
           glutPostRedisplay();
           rposition--;
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


}

void drawRock()
{
    glBegin(GL_QUADS);
    glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*3, 0*3); //bottom
        glVertex2i(15*3, 1*3);
        glVertex2i(11*3, 1*3);
        glVertex2i(11*3, 0*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*3, 1*3); // bottom to left
        glVertex2i(11*3, 2*3);
        glVertex2i(7*3, 2*3);
        glVertex2i(7*3, 1*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 2*3);
        glVertex2i(7*3, 3*3);
        glVertex2i(6*3, 3*3);
        glVertex2i(6*3, 2*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 3*3);
        glVertex2i(6*3, 5*3);
        glVertex2i(5*3, 5*3);
        glVertex2i(5*3, 3*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 5*3);
        glVertex2i(5*3, 6*3);
        glVertex2i(4*3, 6*3);
        glVertex2i(4*3, 5*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 6*3);
        glVertex2i(4*3, 7*3);
        glVertex2i(3*3, 7*3);
        glVertex2i(3*3, 6*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(3*3, 7*3);
        glVertex2i(3*3, 9*3);
        glVertex2i(2*3, 9*3);
        glVertex2i(2*3, 7*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(2*3, 9*3);
        glVertex2i(2*3, 10*3);
        glVertex2i(1*3, 10*3);
        glVertex2i(1*3, 9*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(1*3, 10*3); // left
        glVertex2i(1*3, 12*3);
        glVertex2i(0*3, 12*3);
        glVertex2i(0*3, 10*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(2*3, 12*3); // left to top 1
        glVertex2i(2*3, 14*3);
        glVertex2i(1*3, 14*3);
        glVertex2i(1*3, 12*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(3*3, 14*3);
        glVertex2i(3*3, 17*3);
        glVertex2i(2*3, 17*3);
        glVertex2i(2*3, 14*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 17*3);
        glVertex2i(4*3, 18*3);
        glVertex2i(3*3, 18*3);
        glVertex2i(3*3, 17*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 18*3); //top 1
        glVertex2i(9*3, 19*3);
        glVertex2i(3*3, 19*3);
        glVertex2i(3*3, 18*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 17*3); //top 2
        glVertex2i(18*3, 18*3);
        glVertex2i(9*3, 18*3);
        glVertex2i(9*3, 17*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*3, 16*3); //top 2 to right 1
        glVertex2i(19*3, 17*3);
        glVertex2i(18*3, 17*3);
        glVertex2i(18*3, 16*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(21*3, 15*3);
        glVertex2i(21*3, 16*3);
        glVertex2i(19*3, 16*3);
        glVertex2i(19*3, 15*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(22*3, 14*3);
        glVertex2i(22*3, 15*3);
        glVertex2i(21*3, 15*3);
        glVertex2i(21*3, 14*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(23*3, 12*3);
        glVertex2i(23*3, 14*3);
        glVertex2i(22*3, 14*3);
        glVertex2i(22*3, 12*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(24*3, 5*3);  //right
        glVertex2i(24*3, 12*3);
        glVertex2i(23*3, 12*3);
        glVertex2i(23*3, 5*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*3, 16*3); //top 2 to right 2
        glVertex2i(16*3, 17*3);
        glVertex2i(15*3, 17*3);
        glVertex2i(15*3, 16*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(17*3, 14*3);
        glVertex2i(17*3, 16*3);
        glVertex2i(16*3, 16*3);
        glVertex2i(16*3, 14*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 13*3);
        glVertex2i(18*3, 14*3);
        glVertex2i(17*3, 14*3);
        glVertex2i(17*3, 13*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*3, 11*3);
        glVertex2i(19*3, 13*3);
        glVertex2i(18*3, 13*3);
        glVertex2i(18*3, 11*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(21*3, 10*3);
        glVertex2i(21*3, 11*3);
        glVertex2i(19*3, 11*3);
        glVertex2i(19*3, 10*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(22*3, 9*3);
        glVertex2i(22*3, 10*3);
        glVertex2i(21*3, 10*3);
        glVertex2i(21*3, 9*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(23*3, 8*3);
        glVertex2i(23*3, 9*3);  //top 2 to right 2 connecting to right
        glVertex2i(22*3, 9*3);
        glVertex2i(22*3, 8*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(23*3, 4*3);  //right to bottom
        glVertex2i(23*3, 5*3);
        glVertex2i(21*3, 5*3);
        glVertex2i(21*3, 4*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(21*3, 3*3);
        glVertex2i(21*3, 4*3);
        glVertex2i(19*3, 4*3);
        glVertex2i(19*3, 3*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*3, 2*3);
        glVertex2i(19*3, 3*3);
        glVertex2i(18*3, 3*3);
        glVertex2i(18*3, 2*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 1*3);
        glVertex2i(18*3, 2*3);
        glVertex2i(17*3, 2*3);
        glVertex2i(17*3, 1*3);

        glColor3ub (226, 226, 226);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(17*3, 0*3);
        glVertex2i(17*3, 1*3);
        glVertex2i(15*3, 1*3);
        glVertex2i(15*3, 0*3);  // Border ENDS $$$$$$$$$

        glColor3ub (214, 214, 214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*3, 1*3);
        glVertex2i(13*3, 2*3);
        glVertex2i(11*3, 2*3);
        glVertex2i(11*3, 1*3);

        glColor3ub (196,196,196);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(17*3, 1*3);
        glVertex2i(17*3, 2*3);
        glVertex2i(13*3, 2*3);
        glVertex2i(13*3, 1*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*3, 2*3);
        glVertex2i(12*3, 3*3);
        glVertex2i(11*3, 3*3);
        glVertex2i(11*3, 2*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*3, 3*3);
        glVertex2i(11*3, 4*3);
        glVertex2i(10*3, 4*3);
        glVertex2i(10*3, 3*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*3, 4*3);
        glVertex2i(11*3, 6*3);
        glVertex2i(9*3, 6*3);
        glVertex2i(9*3, 4*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*3, 5*3);
        glVertex2i(12*3, 9*3);
        glVertex2i(11*3, 9*3);
        glVertex2i(11*3, 5*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 5*3);
        glVertex2i(9*3, 9*3);
        glVertex2i(8*3, 9*3);
        glVertex2i(8*3, 5*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 6*3);
        glVertex2i(8*3, 8*3);
        glVertex2i(7*3, 8*3);
        glVertex2i(7*3, 6*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*3, 6*3);
        glVertex2i(13*3, 7*3);
        glVertex2i(12*3, 7*3);
        glVertex2i(12*3, 6*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*3, 6*3);
        glVertex2i(11*3, 8*3);
        glVertex2i(9*3, 8*3);
        glVertex2i(9*3, 6*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*3, 8*3);
        glVertex2i(12*3, 9*3);
        glVertex2i(8*3, 9*3);
        glVertex2i(8*3, 8*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*3, 2*3);
        glVertex2i(11*3, 3*3);
        glVertex2i(10*3, 3*3);
        glVertex2i(10*3, 2*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 2*3);
        glVertex2i(9*3, 3*3);
        glVertex2i(8*3, 3*3);
        glVertex2i(8*3, 2*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(10*3, 3*3);
        glVertex2i(10*3, 4*3);
        glVertex2i(9*3, 4*3);
        glVertex2i(9*3, 3*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(10*3, 2*3);
        glVertex2i(10*3, 3*3);
        glVertex2i(9*3, 3*3);
        glVertex2i(9*3, 2*3);

        glColor3ub (219,219,219);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 3*3);
        glVertex2i(9*3, 4*3);
        glVertex2i(8*3, 4*3);
        glVertex2i(8*3, 3*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 2*3);
        glVertex2i(8*3, 3*3);
        glVertex2i(7*3, 3*3);
        glVertex2i(7*3, 2*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 3*3);
        glVertex2i(8*3, 4*3);
        glVertex2i(7*3, 4*3);
        glVertex2i(7*3, 3*3);

        glColor3ub (142, 142, 142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 3*3);
        glVertex2i(7*3, 5*3);
        glVertex2i(6*3, 5*3);
        glVertex2i(6*3, 3*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 4*3);
        glVertex2i(8*3, 5*3);
        glVertex2i(7*3, 5*3);
        glVertex2i(7*3, 4*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 5*3);
        glVertex2i(7*3, 6*3);
        glVertex2i(6*3, 6*3);
        glVertex2i(6*3, 5*3);

        glColor3ub (142, 142, 142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 5*3);
        glVertex2i(6*3, 6*3);
        glVertex2i(5*3, 6*3);
        glVertex2i(5*3, 5*3);

        glColor3ub (142, 142, 142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 6*3);
        glVertex2i(6*3, 8*3);
        glVertex2i(4*3, 8*3);
        glVertex2i(4*3, 6*3);

        glColor3ub (142, 142, 142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 7*3);
        glVertex2i(7*3, 8*3);
        glVertex2i(6*3, 8*3);
        glVertex2i(6*3, 7*3);

        glColor3ub (163, 163, 163);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 6*3);
        glVertex2i(7*3, 7*3);
        glVertex2i(6*3, 7*3);
        glVertex2i(6*3, 6*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 5*3);
        glVertex2i(8*3, 6*3);
        glVertex2i(7*3, 6*3);
        glVertex2i(7*3, 5*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 4*3);
        glVertex2i(9*3, 5*3);
        glVertex2i(8*3, 5*3);
        glVertex2i(8*3, 4*3);

        glColor3ub (102,102,102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 7*3);
        glVertex2i(4*3, 8*3);
        glVertex2i(3*3, 8*3);
        glVertex2i(3*3, 7*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 8*3);
        glVertex2i(4*3, 9*3);
        glVertex2i(3*3, 9*3);
        glVertex2i(3*3, 8*3);

        glColor3ub (102,102,102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 8*3);
        glVertex2i(5*3, 9*3);
        glVertex2i(4*3, 9*3);
        glVertex2i(4*3, 8*3);

        glColor3ub (219,219,219);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i(7*3, 8*3);
        glVertex2i(7*3, 9*3);
        glVertex2i(5*3, 9*3);
        glVertex2i(5*3, 8*3);

        glColor3ub (219,219,219);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 9*3);
        glVertex2i(7*3, 10*3);
        glVertex2i(6*3, 10*3);
        glVertex2i(6*3, 9*3);

        glColor3ub (219,219,219);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 10*3);
        glVertex2i(6*3, 11*3);
        glVertex2i(5*3, 11*3);
        glVertex2i(5*3, 10*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 9*3);
        glVertex2i(6*3, 10*3);
        glVertex2i(5*3, 10*3);
        glVertex2i(5*3, 9*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 10*3);
        glVertex2i(5*3, 11*3);
        glVertex2i(4*3, 11*3);
        glVertex2i(4*3, 10*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 10*3);
        glVertex2i(4*3, 11*3);
        glVertex2i(3*3, 11*3);
        glVertex2i(3*3, 10*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 9*3);
        glVertex2i(4*3, 10*3);
        glVertex2i(3*3, 10*3);
        glVertex2i(3*3, 9*3);

        glColor3ub (102, 102, 102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 9*3);
        glVertex2i(5*3, 10*3);
        glVertex2i(4*3, 10*3);
        glVertex2i(4*3, 9*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 11*3);
        glVertex2i(5*3, 13*3);
        glVertex2i(4*3, 13*3);
        glVertex2i(4*3, 11*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 12*3);
        glVertex2i(4*3, 15*3);
        glVertex2i(3*3, 15*3);
        glVertex2i(3*3, 12*3);

        glColor3ub (183,170,170);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(3*3, 12*3);
        glVertex2i(3*3, 14*3);
        glVertex2i(2*3, 14*3);
        glVertex2i(2*3, 12*3);

        glColor3ub (183,170,170);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(3*3, 10*3);
        glVertex2i(3*3, 11*3);
        glVertex2i(2*3, 11*3);
        glVertex2i(2*3, 10*3);

        glColor3ub (206,194,194);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(3*3, 11*3);
        glVertex2i(3*3, 12*3);
        glVertex2i(1*3, 12*3);
        glVertex2i(1*3, 11*3);

        glColor3ub (206,194,194);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(2*3, 10*3);
        glVertex2i(2*3, 11*3);
        glVertex2i(1*3, 11*3);
        glVertex2i(1*3, 10*3);

        glColor3ub (183,170,170);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 11*3);
        glVertex2i(4*3, 12*3);
        glVertex2i(3*3, 12*3);
        glVertex2i(3*3, 11*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(3*3, 9*3);
        glVertex2i(3*3, 10*3);
        glVertex2i(2*3, 10*3);
        glVertex2i(2*3, 9*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 16*3);
        glVertex2i(5*3, 17*3);
        glVertex2i(3*3, 17*3);
        glVertex2i(3*3, 16*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(4*3, 15*3);
        glVertex2i(4*3, 16*3);
        glVertex2i(3*3, 16*3);
        glVertex2i(3*3, 15*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 16*3);
        glVertex2i(7*3, 17*3);
        glVertex2i(6*3, 17*3);
        glVertex2i(6*3, 16*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 17*3);
        glVertex2i(8*3, 18*3);
        glVertex2i(7*3, 18*3);
        glVertex2i(7*3, 17*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 16*3);
        glVertex2i(9*3, 17*3);
        glVertex2i(8*3, 17*3);
        glVertex2i(8*3, 16*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 17*3);
        glVertex2i(7*3, 18*3);
        glVertex2i(5*3, 18*3);
        glVertex2i(5*3, 17*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 17*3);
        glVertex2i(5*3, 18*3);
        glVertex2i(4*3, 18*3);
        glVertex2i(4*3, 17*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 16*3);
        glVertex2i(6*3, 17*3);
        glVertex2i(5*3, 17*3);
        glVertex2i(5*3, 16*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 17*3);
        glVertex2i(9*3, 18*3);
        glVertex2i(8*3, 18*3);
        glVertex2i(8*3, 17*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*3, 16*3);
        glVertex2i(9*3, 17*3);
        glVertex2i(8*3, 17*3);
        glVertex2i(8*3, 16*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 16*3);
        glVertex2i(8*3, 17*3);
        glVertex2i(7*3, 17*3);
        glVertex2i(7*3, 16*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 15*3);
        glVertex2i(5*3, 16*3);
        glVertex2i(4*3, 16*3);
        glVertex2i(4*3, 15*3);

        glColor3ub (102,102,102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 15*3);
        glVertex2i(6*3, 16*3);
        glVertex2i(5*3, 16*3);
        glVertex2i(5*3, 15*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(7*3, 15*3);
        glVertex2i(7*3, 16*3);
        glVertex2i(6*3, 16*3);
        glVertex2i(6*3, 15*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 14*3);
        glVertex2i(8*3, 15*3);
        glVertex2i(5*3, 15*3);
        glVertex2i(5*3, 14*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*3, 13*3);
        glVertex2i(6*3, 15*3);
        glVertex2i(5*3, 15*3);
        glVertex2i(5*3, 13*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 14*3);
        glVertex2i(5*3, 15*3);
        glVertex2i(4*3, 15*3);
        glVertex2i(4*3, 14*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(5*3, 13*3);
        glVertex2i(5*3, 14*3);
        glVertex2i(4*3, 14*3);
        glVertex2i(4*3, 13*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*3, 13*3);
        glVertex2i(8*3, 14*3);
        glVertex2i(6*3, 14*3);
        glVertex2i(6*3, 13*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*3, 10*3);
        glVertex2i(13*3, 13*3);
        glVertex2i(5*3, 13*3);
        glVertex2i(5*3, 10*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*3, 9*3);
        glVertex2i(15*3, 10*3);
        glVertex2i(5*3, 10*3);
        glVertex2i(5*3, 9*3);

        glColor3ub (63,63,63);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 6*3);
        glVertex2i(18*3, 9*3);
        glVertex2i(15*3, 9*3);
        glVertex2i(15*3, 6*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 3*3);
        glVertex2i(18*3, 6*3);
        glVertex2i(16*3, 6*3);
        glVertex2i(16*3, 3*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*3, 3*3);
        glVertex2i(16*3, 6*3);
        glVertex2i(12*3, 6*3);
        glVertex2i(12*3, 3*3);

        glColor3ub (175,175,175);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*3, 6*3);
        glVertex2i(15*3, 9*3);
        glVertex2i(13*3, 9*3);
        glVertex2i(13*3, 6*3);

        glColor3ub (183,170,170);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 9*3);
        glVertex2i(18*3, 13*3);
        glVertex2i(15*3, 13*3);
        glVertex2i(15*3, 9*3);

        glColor3ub (214,214,214);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(17*3, 7*3);
        glVertex2i(17*3, 12*3);
        glVertex2i(16*3, 12*3);
        glVertex2i(16*3, 7*3);

        glColor3ub (102,102,102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*3, 10*3);
        glVertex2i(15*3, 13*3);
        glVertex2i(13*3, 13*3);
        glVertex2i(13*3, 10*3);

        glColor3ub (195,195,195);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*3, 13*3);
        glVertex2i(15*3, 17*3);
        glVertex2i(9*3, 17*3);
        glVertex2i(9*3, 13*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*3, 2*3);
        glVertex2i(18*3, 3*3);
        glVertex2i(12*3, 3*3);
        glVertex2i(12*3, 2*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(17*3, 13*3);
        glVertex2i(17*3, 14*3);
        glVertex2i(12*3, 14*3);
        glVertex2i(12*3, 13*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*3, 14*3);
        glVertex2i(16*3, 16*3);
        glVertex2i(15*3, 16*3);
        glVertex2i(15*3, 14*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*3, 14*3);
        glVertex2i(19*3, 16*3);
        glVertex2i(17*3, 16*3);
        glVertex2i(17*3, 14*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(22*3, 11*3);
        glVertex2i(22*3, 14*3);
        glVertex2i(19*3, 14*3);
        glVertex2i(19*3, 11*3);

        glColor3ub (142,142,142);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(22*3, 5*3);
        glVertex2i(22*3, 8*3);
        glVertex2i(19*3, 8*3);
        glVertex2i(19*3, 5*3);

        glColor3ub (45,45,45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(21*3, 6*3);
        glVertex2i(21*3, 7*3);
        glVertex2i(20*3, 7*3);
        glVertex2i(20*3, 6*3);

        glColor3ub (89,89,89);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(21*3, 8*3);
        glVertex2i(21*3, 10*3);
        glVertex2i(18*3, 10*3);
        glVertex2i(18*3, 8*3);

        glColor3ub (163,163,163);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*3, 3*3);
        glVertex2i(19*3, 8*3);
        glVertex2i(18*3, 8*3);
        glVertex2i(18*3, 3*3);
    glEnd();
    glFlush();
}





void drawRock1()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[j][0],arr[j][1]);
    glVertex2i(arr[j][2],arr[j][1]);
    glVertex2i(arr[j][2],arr[j][3]);
    glVertex2i(arr[j][0],arr[j][3]);
    glEnd();

    glPushMatrix();
    glTranslatef(arr[j][0],0,0);
    drawRock();
    glPopMatrix();
    glFlush();
}

void drawRock2()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[k][0],arr[k][1]);
    glVertex2i(arr[k][2],arr[k][1]);
    glVertex2i(arr[k][2],arr[k][3]);
    glVertex2i(arr[k][0],arr[k][3]);
    glEnd();

    glPushMatrix();
    glTranslatef(arr[k][0],0,0);
    drawRock();
    glPopMatrix();
    glFlush();
}

void drawRock3()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[l][0],arr[l][1]);
    glVertex2i(arr[l][2],arr[l][1]);
    glVertex2i(arr[l][2],arr[l][3]);
    glVertex2i(arr[l][0],arr[l][3]);
    //glFlush();
    glEnd();

    glPushMatrix();
    glTranslatef(arr[l][0],0,0);
    drawRock();
    glPopMatrix();
    glFlush();
}

void drawRock4()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[m][0],arr[m][1]);
    glVertex2i(arr[m][2],arr[m][1]);
    glVertex2i(arr[m][2],arr[m][3]);
    glVertex2i(arr[m][0],arr[m][3]);
    //glFlush();
    glEnd();

    glPushMatrix();
    glTranslatef(arr[m][0],0,0);
    drawRock();
    glPopMatrix();
    glFlush();
}

void drawRock5()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[n][0],arr[n][1]);
    glVertex2i(arr[n][2],arr[n][1]);
    glVertex2i(arr[n][2],arr[n][3]);
    glVertex2i(arr[n][0],arr[n][3]);
    glEnd();

    glPushMatrix();
    glTranslatef(arr[n][0],0,0);
    drawRock();
    glPopMatrix();
    glFlush();
}

void drawRock6()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[o][0],arr[o][1]);
    glVertex2i(arr[o][2],arr[o][1]);
    glVertex2i(arr[o][2],arr[o][3]);
    glVertex2i(arr[o][0],arr[o][3]);

    glEnd();

    glPushMatrix();
    glTranslatef(arr[o][0],0,0);
    drawRock();
    glPopMatrix();
    glFlush();
}

void drawRock7()
{
    glBegin(GL_QUADS);
    glColor3ub (0,0,0);
    glVertex2i(arr[p][0],arr[p][1]);
    glVertex2i(arr[p][2],arr[p][1]);
    glVertex2i(arr[p][2],arr[p][3]);
    glVertex2i(arr[p][0],arr[p][3]);
    glTranslatef(arr[p][0],flag,0);

    glEnd();
    glPushMatrix();
    glTranslatef(arr[p][0],0,0);
    drawRock();
    glPopMatrix();

    glFlush();
}


void drawScene()
{
    glPushMatrix();
    drawRocket();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock1();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock2();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock3();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock4();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock5();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock6();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, flag ,0);
    drawRock7();

    glPopMatrix();


}


void update(int value)
{
    if(flag < 640)
    {

        flag += speed;
    }
    else
    {
        RandQuad();
        flag = 0;

    }

	glutPostRedisplay();
	glutTimerFunc(20, update, 0);
}

bool collision()
{
    if((rposition == 8 || rposition == 9) && ( j == 0 || k == 0 || l == 0 || m == 0 || n == 0 || o == 0 || p == 0) && flag > 640)
    {
        return true;
    }

    else if((rposition == 6 || rposition == 7) && ( j == 1 || k == 1 || l == 1 || m == 1 || n == 1 || o == 1 || p == 1) && flag > 640)
    {
        return true;
    }

    else if((rposition == 4 || rposition == 5) && ( j == 2 || k == 2 || l == 2 || m == 2 || n == 2 || o == 2 || p == 2) && flag > 640)
    {
        return true;
    }

    else if((rposition == 2 || rposition == 3) && ( j == 3 || k == 3 || l == 3 || m == 3 || n == 3 || o == 3 || p == 3) && flag > 640)
    {
        return true;
    }

    else if((rposition == 0 || rposition == 1) && ( j == 4 || k == 4 || l == 4 || m == 4 || n == 4 || o == 4 || p == 4) && flag > 640)
    {
        return true;
    }

    else if((rposition == -1 || rposition == -2) && ( j == 5 || k == 5 || l == 5 || m == 5 || n == 5 || o == 5 || p == 5) && flag > 640)
    {
        return true;
    }

    else if((rposition == -3 || rposition == -4) && ( j == 6 || k == 6 || l == 6 || m == 6 || n == 6 || o == 6 || p == 6) && flag > 640)
    {
        return true;
    }

    else if((rposition == -5 || rposition == -6) && ( j == 7 || k == 7 || l == 7 || m == 7 || n == 7 || o == 7 || p == 7) && flag > 640)
    {
        return true;
    }

    else if((rposition == -7 || rposition == -8) && ( j == 8 || k == 8 || l == 8 || m == 8 || n == 8 || o == 8 || p == 8) && flag > 640)
    {
        return true;
    }

    else if((rposition == -9 || rposition == -10) && ( j == 9 || k == 9 || l == 9 || m == 9 || n == 9 || o == 9 || p == 9) && flag > 640)
    {
        return true;
    }

    else if((rposition == -11 || rposition == -12) && ( j == 10 || k == 10 || l == 10 || m == 10 || n == 10 || o == 10 || p == 10) && flag > 640)
    {
            return true;
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
    drawText(GLUT_BITMAP_TIMES_ROMAN_24,"Score:",500,450);
    drawNumber(GLUT_BITMAP_TIMES_ROMAN_24,score,10,620,450);
    //sndPlaySound("GameOver.wav",SND_ASYNC|SND_LOOP);
}


void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    if(collision())
    {
        Life--;
        //sndPlaySound("Explosion.wav", SND_FILENAME);
    }

    else if(Life > 0)
    {
        if(flag > 640)
        {
            score++;
        }
        drawNumber(GLUT_BITMAP_TIMES_ROMAN_24,score,10,1020,150);
        drawText(GLUT_BITMAP_TIMES_ROMAN_24,"Score:",950,150);
        drawText(GLUT_BITMAP_TIMES_ROMAN_24,"Lives left:",950,100);
        drawNumber(GLUT_BITMAP_TIMES_ROMAN_24,Life,10,1050,100);
        drawScene();
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
	glutCreateWindow("Dodge the Asteroids!");
	glutDisplayFunc(myDisplay);
	myInit();
	//sndPlaySound("Soundtrack.wav",SND_ASYNC|SND_LOOP);//Play background music
	glutTimerFunc(20, update, 0);
	glutSpecialFunc(keyboard);
	glutMainLoop();
	return 0;
}


