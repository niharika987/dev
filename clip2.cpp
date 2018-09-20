#include<iostream>
#include<GL/glut.h>
double x1=0.25,y1=0.25,x2=0.35,y2=0.65,xmin=0,ymin=0;
double xmax=0.5,ymax=0.5;
void display()
{

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(0,0);
glVertex2f(0,0.5);
glVertex2f(0.5,0.5);
glVertex2f(0.5,0);
glEnd();

glColor3f(1,1,0);
glBegin(GL_LINES);

glVertex2f(x1,y1);
glVertex2f(x2,y2);

glEnd();


glutSwapBuffers();
glFlush();
	
}
void mouse(int btn,int state, int x,int y)
{ int left1=0,right1=0,top1=0,btm1=0,left2=0,right2=0,top2=0,btm2=0;
	if(btn==GLUT_LEFT_BUTTON)
	{
		if(x1-xmin<0)
		left1=1;
		else if(xmax-x1<0)
		right1=1;
		else if(y1-ymin<0)
		btm1=1;
		else if(ymax-y1<0)
		top1=1;
		
		if(x2-xmin<0)
		left2=1;
		else if(xmax-x2<0)
		right2=1;
		else if(y2-ymin<0)
		btm2=1;
		else if(ymax-y2<0)
		top2=1;
		
		if(left1*left2==0 && right1*right2==0 && top1*top2==0 && btm1*btm2==0)
		{
			//cout<<"clipping";
		y2=0.5;
		double m=(y2-y1)/(x2-x1);
		x2=x1+(ymax-y1)/m;
		display();	
		}
		
	}
}
int main(int argv,char** argc)
{
	glutInit(&argv,argc);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("line clipping");
	glutMouseFunc(mouse);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	
}
