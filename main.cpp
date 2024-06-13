#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 1.0, 0.0);



    glBegin(GL_TRIANGLES);

    glVertex2i(80, 150);

    glVertex2i(162, 220);

    glVertex2i(245, 150);

    glEnd();


    glColor3f(1.0, 1.0, 1.0);


    glBegin(GL_POLYGON);

    glVertex2i(100, 50);
    glVertex2i(225, 50);

    glVertex2i(225, 125);
    glVertex2i(100, 125);

    glVertex2i(225, 50);
    glVertex2i(225, 150);

    glVertex2i(100, 150);
    glVertex2i(100, 50);


    glEnd();

    glColor3f(1.0, 1.0, 0.0);


    glBegin(GL_POLYGON);

    glVertex2i(150, 50);
    glVertex2i(175, 50);

    glVertex2i(175, 50);
    glVertex2i(175, 125);

    glVertex2i(175, 125);
    glVertex2i(150, 125);

    glVertex2i(150, 125);
    glVertex2i(150, 50);


    glEnd();

    glColor3f(1.0, 0.0, 0.0);


    glBegin(GL_POLYGON);

    glVertex2i(115, 90);
    glVertex2i(140, 90);

    glVertex2i(140, 90);
    glVertex2i(140, 125);

    glVertex2i(140, 125);
    glVertex2i(115, 125);

    glVertex2i(115, 125);
    glVertex2i(115, 90);


    glEnd();

    glColor3f(1.0, 0.0, 0.0);


    glBegin(GL_POLYGON);

    glVertex2i(185, 90);
    glVertex2i(210, 90);

    glVertex2i(210, 90);
    glVertex2i(210, 125);

    glVertex2i(210, 125);
    glVertex2i(185, 125);

    glVertex2i(185, 125);
    glVertex2i(185, 90);


    glEnd();


    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(300, 50);
    glutInitWindowSize(1000, 600);
    glutCreateWindow("B190305008");

    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();

    return 0;
}
