#include<GL/glut.h>
void display()
{ glClear(GL_COLOR_BUFFER_BIT);

gluOrtho2D(-50,50,-50,50);
	int x=0,ry=5;
	int y=ry;
	int p=1-ry;
	glPointSize(10.0);
	while(x<=y)
	{ glBegin(GL_POINTS);
			glVertex2d(x,y);
			glVertex2d(-x,y);
			glVertex2d(x,-y);
			glVertex2d(-x,-y);
			glVertex2d(y,x);
			glVertex2d(y,-x);
			glVertex2d(-y,-x);
			glVertex2d(-y,x);
			
		if(p<0)
		{
			
			x++;
		
		p=p+(2*x)+1;
		}
		else{
			x++;
			y--;
			p=p+2*(x-y)+1;
		}
	glEnd();	
	}
	
	glFlush();
}
int main(int a,char** b)
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("circle");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	
}
