#include <GL/glut.h>
#include <math.h>
void display()

{
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14*2; a+=0.1){
        gVertex2f(cos(a), sin(a) );

    }
    glEnd();




    glutSwapBuffers();
}

int main(int argc, char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week02_glut_color_teapot");
    glutDisplayFunc(display);
    glutMainLoop();
}
