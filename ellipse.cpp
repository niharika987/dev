#include<Gl/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<iostream>
using namespace std;
int y=0,x=0,rx=6,ry=10;
void abc(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glOrtho(-100,100,-100,100,-100,100);
	int a=(rx*rx);
	int b=(ry*ry);
y=ry;
	int p1=b-(rx*b)+a/4;
	int p2=b*(x+0.5)*(x+0.5)+a*(y-1)*(y-1)-a*b;
	int b2=0,a2=0;
	//glRotatef(ang,1,0,0);
	glBegin(GL_POINTS);
	while(b2<a2)
	{
	
   if(p1<0)
   { x=x+1;
  // cout<<x<<y<<"-ve"<<endl;
   b2=2*b*x;
   a2=2*a*y;
   p1=p1+b2+b;
   	
   }
  else{
  	x=x+1;
  	y=y-1;
  	//cout<<x<<y<<"+ve"<<endl;
  	b2=2*b*x;
  	a2=2*a*y;
   p1=p1+b2-a2+b;
  }
  glColor3f(0,1,0);
glVertex2f(x,y);

   glVertex2f(-x,y);
   
   glVertex2f(-x,-y);
  
   glVertex2f(x,-y);
  
   
}


while(y>0)
{
	if(p2<0)
	{
		x=x+1;
		y=y-1;
		b2=2*b*x;
   a2=2*a*y;
		p2=p2+b2-a2+a;
		
	}
	else{
		y=y-1;
		b2=2*b*x;
   a2=2*a*y;
		p2=p2-b2+a;
	}
	glVertex2f(x,y);
	glVertex2f(-x,y);
	glVertex2f(-x,-y);
	glVertex2f(x,-y);
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
