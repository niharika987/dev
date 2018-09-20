#include<Gl/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<iostream>
using namespace std;

void abc(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	int y,x=0,r=10;
	y=r;
	int p=1-r;
	glOrtho(0,10,0,10,0,100);
	//glRotatef(ang,1,0,0);
	glBegin(GL_POINTS);
	while(x!=y)
	{
	
   if(p<0)
   { x=x+1;
   cout<<x<<y<<"-ve"<<endl;
   glVertex2f(x,y);
   glVertex2f(-x,y);
   glVertex2f(-y,x);
   glVertex2f(-y,-x);
   glVertex2f(-x,-y);
   glVertex2f(x,-y);
   glVertex2f(y,-x);
   glVertex2f(y,x);
   p=p+(2*x)+1;
   	
   }
  else{
  	x=x+1;
  	y=y-1;
  	cout<<x<<y<<"+ve"<<endl;
  	glVertex2f(x,y);
   glVertex2f(-x,y);
   glVertex2f(-y,x);
   glVertex2f(-y,-x);
   glVertex2f(-x,-y);
   glVertex2f(x,-y);
   glVertex2f(y,-x);
   glVertex2f(y,x);
   p=p+(2*x)-(2*y)+1;
  }

}
	glFlush();
	
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("obj");
//	glutMouseFunc(mouse);
//	glutIdleFunc(abc);
	glutDisplayFunc(abc);
	glutMainLoop();
return 0;	
}
