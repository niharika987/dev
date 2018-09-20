#include<iostream>
#include<GL/glut.h>
int deg=0,z=2;
void mymouse(int button, int state, int x, int y)
{

   if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
   {
	z=0;
   }
   else if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
   {
	z=1;
   }   else if(button==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN)
   {
	z=2;
   }

}
void timer(int t){

if(z==1)
deg+=0.00005;
else if(z==0)
deg-=15;
else if(z==2)
deg=deg;
glutPostRedisplay();
glutTimerFunc(10,timer,t);
}

void display(){
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-500,500,-500,500,-500 ,500);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
glRotatef(deg,0,1,0);
glutWireSphere(400,20,100);

glutWireCone(30,100,10,100);

//glutWireTorus(70,80,200,10);

glColor3f(0.5,1.0,0.0);

glutWireTeapot(200);

glFlush();
}
int main(){
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,400);
    glutInitWindowPosition(100,100 );
    glutCreateWindow("Wind Mill");
    glutDisplayFunc(display);
       glutMouseFunc(mymouse);
glutTimerFunc(10,timer,2);

    glutMainLoop();

    return 0;
}
