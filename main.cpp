#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);


}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);

    for (int i = 0; i <= 100; i++) {
        float angle = 2 * 3.1416 * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    circle(18, 18, 45, -40);
    circle(20, 20, 20, -40);
    circle(20, 20, 0, -40);
    circle(20, 20, 0, -40);
    circle(20, 20, -20, -40);
    circle(20, 20, -20, -40);
    circle(20, 20, -35, -40);


   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-10, -23);
   glVertex2i(10, -23);
   glVertex2i(15, -15);
   glVertex2i(-15, -15);
   glEnd();


   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-8, -20);
   glVertex2i(-5, -20);
   glVertex2i(-5, -2);
   glVertex2i(-8, -2);
   glEnd();


   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-11, -15);
   glVertex2i(-8, -15);
   glVertex2i(-8, 0);
   glVertex2i(-11, 0);
   glEnd();

    glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(-5, -15);
   glVertex2i(8, -15);
   glVertex2i(-5, -4);
   glEnd();

    glColor3f(0, 0, 1);
   glBegin(GL_POLYGON);
   glVertex2i(9, -15);
   glVertex2i(10, -15);
   glVertex2i(9, 5);
   glVertex2i(10, 5);
   glEnd();

   glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(9, 0);
   glVertex2i(20, 0);
   glVertex2i(20,6);
   glVertex2i(9, 6);
   glEnd();


    glColor3f(1, 0, 0);
    circle(2, 2, 14, 3);
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
