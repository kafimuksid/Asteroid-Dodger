#include <iostream>
#include <stdlib.h>
#include <GL/gl.h>
#include <glut.h>
#include <math.h>
#include <cstring>
using namespace std;

void myDisplay(void);
void myInit (void);

float _targetPosX=-0.085;
float _targetPosY=-0.42;
float _move = 0.0f;
float xr=0.0;
float yr=0.0;
int upperright;
int upperleft;
int top;
int bottom;


void myDisplay(void)
{
    upperright=(25*5)+xr;
    upperleft=(2*5)+xr;
    top=22*5+yr;
    bottom=0+yr;

    glClear (GL_COLOR_BUFFER_BIT);
    int x=30;
    int y=135;
    for(int i=0;i<7;i++)
    {
        //###################### Black Background ##############################

        glColor3ub (0, 0, 0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(1000, 0);
        glVertex2i(0, 0);
        glVertex2i(0,1000);
        glVertex2i(1000,1000);

//###################### Collision Detector Agents ###########################################

        //      Bottom
        glColor3ub (0, 0, 0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2f((15*5)+xr, bottom);//1  ################# BOTTOM #################
        glVertex2f((15*5)+xr, 1*5+yr);
        glVertex2f((14*5)+xr, 1*5+yr);
        glVertex2f((14*5)+xr, 0+yr);

        glColor3ub (0, 0, 0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2f((13*5)+xr, 18*5+yr);//34 Top of Bridge ################# TOP #################
        glVertex2f((13*5)+xr, top);
        glVertex2f((12*5)+xr, 22*5+yr);
        glVertex2f((12*5)+xr, 18*5+yr);

        glColor3ub (0, 0, 0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2f((25*5)+xr, 4*5+yr);//14 right wing ################# RIGHT #################
        glVertex2f(upperright, 9*5+yr);
        glVertex2f((23*5)+xr, 9*5+yr);
        glVertex2f((23*5)+xr, 4*5+yr);



        glColor3ub (0, 0, 0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2f(0.009375f+xr, 4*5+yr);//1 left wing ################# LEFT #################
        glVertex2f(upperleft, 9*5+yr);
        glVertex2f(0.0f+xr, 9*5+yr);
        glVertex2f(0.0f+xr, 4*5+yr);




        //############ ROCKET BASE ############

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 0+yr);//1  ################# BOTTOM #################
        glVertex2i((15*5)+xr, 1*5+yr);
        glVertex2i((14*5)+xr, 1*5+yr);
        glVertex2i((14*5)+xr, 0+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);//2
        glVertex2i((13*5)+xr, 0+yr);
        glVertex2i((13*5)+xr, 1*5+yr);
        glVertex2i((12*5)+xr, 0+yr);
        glVertex2i((12*5)+xr, 1*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);//3
        glVertex2i((13*5)+xr, 0+yr);
        glVertex2i((13*5)+xr, 6*5+yr);
        glVertex2i((12*5)+xr, (6*5)+yr);
        glVertex2i((12*5)+xr, 0+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*5)+xr, 0+yr);//4 double
        glVertex2i((11*5)+xr, 1*5+yr);
        glVertex2i((10*5)+xr, 1*5+yr);
        glVertex2i((10*5)+xr, 0+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 1*5+yr);//5 double extend
        glVertex2i((15*5)+xr, 3*5+yr);
        glVertex2i((10*5)+xr, 3*5+yr);
        glVertex2i((10*5)+xr, 1*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*5)+xr, 3*5+yr);// 6 spine
        glVertex2i((14*5)+xr, 4*5+yr);
        glVertex2i((11*5)+xr, 4*5+yr);
        glVertex2i((11*5)+xr, 3*5+yr);

        glColor3ub (130, 84, 35);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*5)+xr, 6*5+yr);//7 spine extended
        glVertex2i((13*5)+xr, 9*5+yr);
        glVertex2i((12*5)+xr, 9*5+yr);
        glVertex2i((12*5)+xr, 6*5+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*5)+xr, 10*5+yr);//7.2 spine extended 2
        glVertex2i((13*5)+xr, 12*5+yr);
        glVertex2i((12*5)+xr, 12*5+yr);
        glVertex2i((12*5)+xr, 10*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*5)+xr, 9*5+yr);//7.3 spine extended 3
        glVertex2i((13*5)+xr, 10*5+yr);
        glVertex2i((12*5)+xr, 10*5+yr);
        glVertex2i((12*5)+xr, 9*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((10*5)+xr, 2*5+yr);
        glVertex2i((10*5)+xr, 4*5+yr);//8 left armor 1
        glVertex2i((9*5)+xr, 4*5+yr);
        glVertex2i((9*5)+xr, 2*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*5)+xr, 3*5+yr);//9 left armor 2
        glVertex2i((11*5)+xr, 5*5+yr);
        glVertex2i((10*5)+xr, 5*5+yr);
        glVertex2i((10*5)+xr, 3*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*5)+xr, 4*5+yr);//10 left armor 3
        glVertex2i((12*5)+xr, 6*5+yr);
        glVertex2i((11*5)+xr, 6*5+yr);
        glVertex2i((11*5)+xr, 4*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*5)+xr, 4*5+yr);//11 right armor 3
        glVertex2i((14*5)+xr, 6*5+yr);
        glVertex2i((13*5)+xr, 6*5+yr);
        glVertex2i((13*5)+xr, 4*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 3*5+yr);//12 right armor 2
        glVertex2i((15*5)+xr, 5*5+yr);
        glVertex2i((14*5)+xr, 5*5+yr);
        glVertex2i((14*5)+xr, 3*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*5)+xr, 2*5+yr);//13 right armor 1
        glVertex2i((16*5)+xr, 4*5+yr);
        glVertex2i((15*5)+xr, 4*5+yr);
        glVertex2i((15*5)+xr, 2*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*5)+xr, 7*5+yr);//14 Body 1
        glVertex2i((12*5)+xr, 8*5+yr);
        glVertex2i((10*5)+xr, 8*5+yr);
        glVertex2i((10*5)+xr, 7*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*5)+xr, 6*5+yr);//14.2 Body 1 extend
        glVertex2i((12*5)+xr, 7*5+yr);
        glVertex2i((9*5)+xr, 7*5+yr);
        glVertex2i((9*5)+xr, 6*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*5)+xr, 8*5+yr);//15 Body 2
        glVertex2i((12*5)+xr, 11*5+yr);
        glVertex2i((11*5)+xr, 11*5+yr);
        glVertex2i((11*5)+xr, 8*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*5)+xr, 8*5+yr);//16 Body 3
        glVertex2i((14*5)+xr, 11*5+yr);
        glVertex2i((13*5)+xr, 11*5+yr);
        glVertex2i((13*5)+xr, 8*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 7*5+yr);//17 body 4
        glVertex2i((15*5)+xr, 8*5+yr);
        glVertex2i((13*5)+xr, 8*5+yr);
        glVertex2i((13*5)+xr, 7*5+yr);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((8*16)+xr, 6*5+yr);//17.2 body 4 extend
        glVertex2i((8*16)+xr, 7*5+yr);
        glVertex2i((13*5)+xr, 7*5+yr);
        glVertex2i((13*5)+xr, 6*5+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*5)+xr, 5*5+yr);//18 body joint left
        glVertex2i((11*5)+xr, 6*5+yr);
        glVertex2i((10*5)+xr, 6*5+yr);
        glVertex2i((10*5)+xr, 5*5+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*5)+xr, 6*5+yr);//19 body joint left
        glVertex2i((12*5)+xr, 7*5+yr);
        glVertex2i((11*5)+xr, 7*5+yr);
        glVertex2i((11*5)+xr, 6*5+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*5)+xr, 6*5+yr);//20 body joint right
        glVertex2i((14*5)+xr, 7*5+yr);
        glVertex2i((13*5)+xr, 7*5+yr);
        glVertex2i((13*5)+xr, 6*5+yr);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 5*5+yr);//21 body joint right
        glVertex2i((15*5)+xr, 6*5+yr);
        glVertex2i((14*5)+xr, 6*5+yr);
        glVertex2i((14*5)+xr, 5*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((6*5)+xr, 6*5+yr);//22 Wings left 1
        glVertex2i((6*5)+xr, 7*5+yr);
        glVertex2i((9*5)+xr, 7*5+yr);
        glVertex2i((9*5)+xr, 6*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((2*5)+xr, 6*5+yr);//23 Wings left 1
        glVertex2i((2*5)+xr, 7*5+yr);
        glVertex2i((6*5)+xr, 7*5+yr);
        glVertex2i((6*5)+xr, 6*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((6*5)+xr, 7*5+yr);//24 Wings left 2
        glVertex2i((6*5)+xr, 8*5+yr);
        glVertex2i((9*5)+xr, 8*5+yr);
        glVertex2i((9*5)+xr, 7*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*5)+xr, 6*5+yr);//25 Wings right 1
        glVertex2i((16*5)+xr, 7*5+yr);
        glVertex2i((19*5)+xr, 7*5+yr);
        glVertex2i((19*5)+xr, 6*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((19*5)+xr, 6*5+yr);//26 Wings right 1
        glVertex2i((19*5)+xr, 7*5+yr);
        glVertex2i((23*5)+xr, 7*5+yr);
        glVertex2i((23*5)+xr, 6*5+yr);

        glColor3ub (0,0,0);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((25*5)+xr, 6*5+yr);//26 Wings right 1
        glVertex2i((25*5)+xr, 7*5+yr);
        glVertex2i((26*5)+xr, 7*5+yr);
        glVertex2i((26*5)+xr, 6*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*5)+xr, 7*5+yr);//27 Wings right 2
        glVertex2i((16*5)+xr, 8*5+yr);
        glVertex2i((19*5)+xr, 8*5+yr);
        glVertex2i((19*5)+xr, 7*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 7*5+yr);//28 Wings right joint
        glVertex2i((15*5)+xr, 8*5+yr);
        glVertex2i((16*5)+xr, 8*5+yr);
        glVertex2i((16*5)+xr, 7*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((9*5)+xr, 7*5+yr);//29 Wings left joint
        glVertex2i((9*5)+xr, 8*5+yr);
        glVertex2i((10*5)+xr, 8*5+yr);
        glVertex2i((10*5)+xr, 7*5+yr);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((19*5)+xr, 6*5+yr);//30 Wings right 1
        glVertex2i((19*5)+xr, 7*5+yr);
        glVertex2i((22*5)+xr, 7*5+yr);
        glVertex2i((22*5)+xr, 6*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((15*5)+xr, 8*5+yr);//31 Cockpit foundation left
        glVertex2i((15*5)+xr, 12*5+yr);
        glVertex2i((14*5)+xr, 12*5+yr);
        glVertex2i((14*5)+xr, 8*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((14*5)+xr, 11*5+yr);//31.2 Cockpit foundation left
        glVertex2i((14*5)+xr, 19*5+yr);
        glVertex2i((13*5)+xr, 19*5+yr);
        glVertex2i((13*5)+xr, 11*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((11*5)+xr, 8*5+yr);//32 Cockpit foundation right
        glVertex2i((11*5)+xr, 12*5+yr);
        glVertex2i((10*5)+xr, 12*5+yr);
        glVertex2i((10*5)+xr, 8*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((12*5)+xr, 19*5+yr);//32.2 Cockpit foundation right
        glVertex2i((12*5)+xr, 11*5+yr);
        glVertex2i((11*5)+xr, 11*5+yr);
        glVertex2i((11*5)+xr, 19*5+yr);

        glColor3ub (6, 109, 102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*5)+xr, 12*5+yr);//33 Bridge
        glVertex2i((13*5)+xr, 18*5+yr);
        glVertex2i((12*5)+xr, 18*5+yr);
        glVertex2i((12*5)+xr, 12*5+yr);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((13*5)+xr, 18*5+yr);//34 Top of Bridge ################# TOP #################
        glVertex2i((13*5)+xr, 22*5+yr);
        glVertex2i((12*5)+xr, 22*5+yr);
        glVertex2i((12*5)+xr, 18*5+yr);

        //#################### BORDER ########################

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((2*5)+xr, 4*5+yr);//1 left wing ################# LEFT #################
        glVertex2i((2*5)+xr, 9*5+yr);
        glVertex2i((0*5)+xr, 9*5+yr);
        glVertex2i((0*5)+xr, 4*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i((1*5)+xr, 9*5+yr);//2 left wing upper finish
        glVertex2i((1*5)+xr, 10*5+yr);
        glVertex2i((0*5)+xr, 10*5+yr);
        glVertex2i((0*5)+xr, 9*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((6*5)+xr, 7*5+yr);//3 left wing upper cover
        glVertex2i((6*5)+xr, 8*5+yr);
        glVertex2i((2*5)+xr, 8*5+yr);
        glVertex2i((2*5)+xr, 7*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((10*5)+xr, 5*5+yr);//4 left wing lower cover
        glVertex2i((10*5)+xr, 6*5+yr);
        glVertex2i((2*5)+xr, 6*5+yr);
        glVertex2i((2*5)+xr, 5*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((9*5)+xr, 1*5+yr);//5 left Tail cover
        glVertex2i((9*5)+xr, 4*5+yr);
        glVertex2i((7*5)+xr, 4*5+yr);
        glVertex2i((7*5)+xr, 1*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((8*5)+xr, 0*5+yr);//6 left Tail cover
        glVertex2i((8*5)+xr, 1*5+yr);
        glVertex2i((7*5)+xr, 1*5+yr);
        glVertex2i((7*5)+xr, 0*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((10*5)+xr, 0*5+yr);//7 left Tail cover 2
        glVertex2i((10*5)+xr, 2*5+yr);
        glVertex2i((9*5)+xr, 2*5+yr);
        glVertex2i((9*5)+xr, 0*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((16*5)+xr, 0*5+yr);//8 right Tail cover 2
        glVertex2i((16*5)+xr, 2*5+yr);
        glVertex2i((15*5)+xr, 2*5+yr);
        glVertex2i((15*5)+xr, 0*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((18*5)+xr, 0*5+yr);//9 right Tail cover
        glVertex2i((18*5)+xr, 1*5+yr);
        glVertex2i((17*5)+xr, 1*5+yr);
        glVertex2i((17*5)+xr, 0*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((18*5)+xr, 1*5+yr);//10 right Tail cover
        glVertex2i((18*5)+xr, 4*5+yr);
        glVertex2i((16*5)+xr, 4*5+yr);
        glVertex2i((16*5)+xr, 1*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((23*5)+xr, 5*5+yr);//11 right wing lower cover
        glVertex2i((23*5)+xr, 6*5+yr);
        glVertex2i((15*5)+xr, 6*5+yr);
        glVertex2i((15*5)+xr, 5*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((23*5)+xr, 7*5+yr);//12 right wing upper cover
        glVertex2i((23*5)+xr, 8*5+yr);
        glVertex2i((19*5)+xr, 8*5+yr);
        glVertex2i((19*5)+xr, 7*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i((25*5)+xr, 9*5+yr);//13 right wing upper finish
        glVertex2i((25*5)+xr, 10*5+yr);
        glVertex2i((24*5)+xr, 10*5+yr);
        glVertex2i((24*5)+xr, 9*5+yr);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i((25*5)+xr, 4*5+yr);//14 right wing ################# RIGHT #################
        glVertex2i((25*5)+xr, 9*5+yr);
        glVertex2i((23*5)+xr, 9*5+yr);
        glVertex2i((23*5)+xr, 4*5+yr);

        glEnd();
        glFlush ();
    }
}

void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_UP:
         yr+=5;
         glutPostRedisplay();
          break;

      case GLUT_KEY_DOWN:
          yr-=5;
          glutPostRedisplay();
          break;

          case GLUT_KEY_LEFT:
          xr-=5;
          glutPostRedisplay();
          break;

          case GLUT_KEY_RIGHT:
          xr+=5;
          glutPostRedisplay();
          break;

    }
}




void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}
main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Rocket 101");
glutDisplayFunc(myDisplay);
myInit ();
glutSpecialFunc(specialKeys);
glutMainLoop();
return 0;
}
