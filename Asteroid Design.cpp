#include <stdio.h>
#include<GL/gl.h>
#include <glut.h>

/*
    Colors
    1.  45,45,45
    2.  63,63,63
    3.  142,142,142
    4.  175,175,175
    5.  195,195,195
    6.  214,214,214
    7.  219,219,219
    8.  226,226,226
*/

/*int random (int m)
{
return random;
}*/

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

        //###################### asteroid border #############################

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
        glFlush ();
    }
}

/*
    Colors
        45,45,45
        63,63,63
        89,89,89
        102,102,102
        142,142,142
        163,163,163
        175,175,175
        195,195,195
        214,214,214
        219,219,219
        226,226,226

        183,170,170
        206,194,194
*/

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
