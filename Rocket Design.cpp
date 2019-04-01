#include <stdio.h>
#include<GL/gl.h>
#include <glut.h>

void myDisplay(void);
void myInit (void);

main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Rocket 101");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}

void myDisplay(void)
{
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

        //############ ROCKET BASE ############

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 0);//1
        glVertex2i(15*8, 8);
        glVertex2i(14*8, 8);
        glVertex2i(14*8, 0);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);//2
        glVertex2i(13*8, 0);
        glVertex2i(13*8, 8);
        glVertex2i(12*8, 0);
        glVertex2i(12*8, 8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);//3
        glVertex2i(13*8, 0);
        glVertex2i(13*8, 6*8);
        glVertex2i(12*8, 6*8);
        glVertex2i(12*8, 0);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*8, 0);//4 double
        glVertex2i(11*8, 8);
        glVertex2i(10*8, 8);
        glVertex2i(10*8, 0);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 8);//5 double extend
        glVertex2i(15*8, 3*8);
        glVertex2i(10*8, 3*8);
        glVertex2i(10*8, 8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(14*8, 3*8);// 6 spine
        glVertex2i(14*8, 4*8);
        glVertex2i(11*8, 4*8);
        glVertex2i(11*8, 3*8);

        glColor3ub (130, 84, 35);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*8, 6*8);//7 spine extended
        glVertex2i(13*8, 9*8);
        glVertex2i(12*8, 9*8);
        glVertex2i(12*8, 6*8);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*8, 10*8);//7.2 spine extended 2
        glVertex2i(13*8, 12*8);
        glVertex2i(12*8, 12*8);
        glVertex2i(12*8, 10*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*8, 9*8);//7.3 spine extended 3
        glVertex2i(13*8, 10*8);
        glVertex2i(12*8, 10*8);
        glVertex2i(12*8, 9*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(10*8, 2*8);
        glVertex2i(10*8, 4*8);//8 left armor 1
        glVertex2i(9*8, 4*8);
        glVertex2i(9*8, 2*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*8, 3*8);//9 left armor 2
        glVertex2i(11*8, 5*8);
        glVertex2i(10*8, 5*8);
        glVertex2i(10*8, 3*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*8, 4*8);//10 left armor 3
        glVertex2i(12*8, 6*8);
        glVertex2i(11*8, 6*8);
        glVertex2i(11*8, 4*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(14*8, 4*8);//11 right armor 3
        glVertex2i(14*8, 6*8);
        glVertex2i(13*8, 6*8);
        glVertex2i(13*8, 4*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 3*8);//12 right armor 2
        glVertex2i(15*8, 5*8);
        glVertex2i(14*8, 5*8);
        glVertex2i(14*8, 3*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*8, 2*8);//13 right armor 1
        glVertex2i(16*8, 4*8);
        glVertex2i(15*8, 4*8);
        glVertex2i(15*8, 2*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*8, 7*8);//14 Body 1
        glVertex2i(12*8, 8*8);
        glVertex2i(10*8, 8*8);
        glVertex2i(10*8, 7*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*8, 6*8);//14.2 Body 1 extend
        glVertex2i(12*8, 7*8);
        glVertex2i(9*8, 7*8);
        glVertex2i(9*8, 6*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*8, 8*8);//15 Body 2
        glVertex2i(12*8, 11*8);
        glVertex2i(11*8, 11*8);
        glVertex2i(11*8, 8*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(14*8, 8*8);//16 Body 3
        glVertex2i(14*8, 11*8);
        glVertex2i(13*8, 11*8);
        glVertex2i(13*8, 8*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 7*8);//17 body 4
        glVertex2i(15*8, 8*8);
        glVertex2i(13*8, 8*8);
        glVertex2i(13*8, 7*8);

        glColor3ub (35, 77, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*16, 6*8);//17.2 body 4 extend
        glVertex2i(8*16, 7*8);
        glVertex2i(13*8, 7*8);
        glVertex2i(13*8, 6*8);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*8, 5*8);//18 body joint left
        glVertex2i(11*8, 6*8);
        glVertex2i(10*8, 6*8);
        glVertex2i(10*8, 5*8);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*8, 6*8);//19 body joint left
        glVertex2i(12*8, 7*8);
        glVertex2i(11*8, 7*8);
        glVertex2i(11*8, 6*8);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(14*8, 6*8);//20 body joint right
        glVertex2i(14*8, 7*8);
        glVertex2i(13*8, 7*8);
        glVertex2i(13*8, 6*8);

        glColor3ub (13, 59, 165);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 5*8);//21 body joint right
        glVertex2i(15*8, 6*8);
        glVertex2i(14*8, 6*8);
        glVertex2i(14*8, 5*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*8, 6*8);//22 Wings left 1
        glVertex2i(6*8, 7*8);
        glVertex2i(9*8, 7*8);
        glVertex2i(9*8, 6*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(2*8, 6*8);//23 Wings left 1
        glVertex2i(2*8, 7*8);
        glVertex2i(6*8, 7*8);
        glVertex2i(6*8, 6*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*8, 7*8);//24 Wings left 2
        glVertex2i(6*8, 8*8);
        glVertex2i(9*8, 8*8);
        glVertex2i(9*8, 7*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*8, 6*8);//25 Wings right 1
        glVertex2i(16*8, 7*8);
        glVertex2i(19*8, 7*8);
        glVertex2i(19*8, 6*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*8, 6*8);//26 Wings right 1
        glVertex2i(19*8, 7*8);
        glVertex2i(23*8, 7*8);
        glVertex2i(23*8, 6*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*8, 7*8);//27 Wings right 2
        glVertex2i(16*8, 8*8);
        glVertex2i(19*8, 8*8);
        glVertex2i(19*8, 7*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 7*8);//28 Wings right joint
        glVertex2i(15*8, 8*8);
        glVertex2i(16*8, 8*8);
        glVertex2i(16*8, 7*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*8, 7*8);//29 Wings left joint
        glVertex2i(9*8, 8*8);
        glVertex2i(10*8, 8*8);
        glVertex2i(10*8, 7*8);

        glColor3ub (35, 101, 130);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(19*8, 6*8);//30 Wings right 1
        glVertex2i(19*8, 7*8);
        glVertex2i(22*8, 7*8);
        glVertex2i(22*8, 6*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(15*8, 8*8);//31 Cockpit foundation left
        glVertex2i(15*8, 12*8);
        glVertex2i(14*8, 12*8);
        glVertex2i(14*8, 8*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(14*8, 11*8);//31.2 Cockpit foundation left
        glVertex2i(14*8, 19*8);
        glVertex2i(13*8, 19*8);
        glVertex2i(13*8, 11*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(11*8, 8*8);//32 Cockpit foundation right
        glVertex2i(11*8, 12*8);
        glVertex2i(10*8, 12*8);
        glVertex2i(10*8, 8*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(12*8, 19*8);//32.2 Cockpit foundation right
        glVertex2i(12*8, 11*8);
        glVertex2i(11*8, 11*8);
        glVertex2i(11*8, 19*8);

        glColor3ub (6, 109, 102);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*8, 12*8);//33 Bridge
        glVertex2i(13*8, 18*8);
        glVertex2i(12*8, 18*8);
        glVertex2i(12*8, 12*8);

        glColor3ub (209, 116, 16);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(13*8, 18*8);//34 Top of Bridge
        glVertex2i(13*8, 22*8);
        glVertex2i(12*8, 22*8);
        glVertex2i(12*8, 18*8);

        //#################### BORDER ########################

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(2*8, 4*8);//1 left wing
        glVertex2i(2*8, 9*8);
        glVertex2i(0*8, 9*8);
        glVertex2i(0*8, 4*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i(1*8, 9*8);//2 left wing upper finish
        glVertex2i(1*8, 10*8);
        glVertex2i(0*8, 10*8);
        glVertex2i(0*8, 9*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(6*8, 7*8);//3 left wing upper cover
        glVertex2i(6*8, 8*8);
        glVertex2i(2*8, 8*8);
        glVertex2i(2*8, 7*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(10*8, 5*8);//4 left wing lower cover
        glVertex2i(10*8, 6*8);
        glVertex2i(2*8, 6*8);
        glVertex2i(2*8, 5*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(9*8, 1*8);//5 left Tail cover
        glVertex2i(9*8, 4*8);
        glVertex2i(7*8, 4*8);
        glVertex2i(7*8, 1*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(8*8, 0*8);//6 left Tail cover
        glVertex2i(8*8, 1*8);
        glVertex2i(7*8, 1*8);
        glVertex2i(7*8, 0*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(10*8, 0*8);//7 left Tail cover 2
        glVertex2i(10*8, 2*8);
        glVertex2i(9*8, 2*8);
        glVertex2i(9*8, 0*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(16*8, 0*8);//8 right Tail cover 2
        glVertex2i(16*8, 2*8);
        glVertex2i(15*8, 2*8);
        glVertex2i(15*8, 0*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*8, 0*8);//9 right Tail cover
        glVertex2i(18*8, 1*8);
        glVertex2i(17*8, 1*8);
        glVertex2i(17*8, 0*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(18*8, 1*8);//10 right Tail cover
        glVertex2i(18*8, 4*8);
        glVertex2i(16*8, 4*8);
        glVertex2i(16*8, 1*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(23*8, 5*8);//11 right wing lower cover
        glVertex2i(23*8, 6*8);
        glVertex2i(15*8, 6*8);
        glVertex2i(15*8, 5*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(23*8, 7*8);//12 right wing upper cover
        glVertex2i(23*8, 8*8);
        glVertex2i(19*8, 8*8);
        glVertex2i(19*8, 7*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_POLYGON);
        glVertex2i(25*8, 9*8);//13 right wing upper finish
        glVertex2i(25*8, 10*8);
        glVertex2i(24*8, 10*8);
        glVertex2i(24*8, 9*8);

        glColor3ub (130, 45, 45);
        glPointSize(5.0);
        glBegin(GL_QUADS);
        glVertex2i(25*8, 4*8);//14 right wing
        glVertex2i(25*8, 9*8);
        glVertex2i(23*8, 9*8);
        glVertex2i(23*8, 4*8);

        glEnd();
        glFlush ();
    }
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
