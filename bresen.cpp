#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
int x1=12,y1=10,x2=17,y2=14;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0,100,0,100);
	glBegin(GL_POINTS);
	double m;
	int dy=y2-y1;
	int dx=x2-x1;
	m=(y2-y1)/(x2-x1);
	int p=2*(dy)-dx;
	int f=dx;
	int x=x1,y=y1;
	while(f>=1)
	{ if(p<0)
	{
		x=x+1;
		y=y;
		p=p+2*(dy);
	} 
	else{
		x=x+1;
		y=y+1;
		p=p+2*(dy)-2*(dx);
	}
	
	glVertex2f(x,y);
		f--;
	}
	glEnd();
	glFlush();
}
int main(int a, char **b)
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("brsen");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
