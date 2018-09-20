#include<Gl/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<iostream>
using namespace std;
int y=0,x=0,r=40;
void abc(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glOrtho(-100,100,-100,100,-100,100);
	
	y=y+r;
	int p=1-r;
	
	//glRotatef(ang,1,0,0);
	glBegin(GL_POINTS);
	while(x<y)
	{
	
   if(p<0)
   { x=x+1;
  // cout<<x<<y<<"-ve"<<endl;
   
   p=p+(2*x)+1;
   	
   }
  else{
  	x=x+1;
  	y=y-1;
  	//cout<<x<<y<<"+ve"<<endl;
  	
   p=p+(2*x)-(2*y)+1;
  }
  glColor3f(0,1,0);
glVertex2f(x,y);
glVertex2f(y,x);
   glVertex2f(-x,y);
   glVertex2f(-y,x);
   glVertex2f(-x,-y);
   glVertex2f(-y,-x);
   
   
   glVertex2f(x,-y);
   glVertex2f(y,-x);
   
}
glEnd();
	glFlush();
	
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(300,50);
	glutCreateWindow("obj");
//	glutMouseFunc(mouse);
//	glutIdleFunc(abc);
	glutDisplayFunc(abc);
	glutMainLoop();
return 0;	
}
