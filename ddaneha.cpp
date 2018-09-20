 #include<iostream>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
using namespace std;
	int x1,y3,x2,y2;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glOrtho(0,10,0,10,0,100);
	glColor3f(1,1,1);
	glBegin(GL_POINTS);
	int dy,dx,step,i;
	dy= (y2-y3);	dx= (x2-x1);
	cout<<dy;	
	step=(dy>dx ?fabs(dy):fabs(dx));
	cout<<step;

	double xinc = dx/step;
double yinc = (double)dy/(double)step; 
	glVertex2f(x1,y3) ;
	for(i=0;i<step;i++)
	{
		x1+= xinc;
		y3=y3+ yinc;
cout<<x1<<y3;
		glVertex2f(round(x1),round(y3)) ;
	}
	glEnd();
	glFlush();
}
int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	//glutInitDisplayMode(GLUT_RGB,GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("data");
	glutDisplayFunc(display);
	cout<<"1st point co-ordinates:\n x1 = ";
	cin>>x1;cout<<"\n y1 =";cin>>y3;
	cout<<"2nd point co-ordinates:\n x2 = ";
	cin>>x2; cout<<"\n y2 =";	cin>>y2;
	glutMainLoop();
	
}
