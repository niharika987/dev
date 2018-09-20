#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
void display()
{  glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0,100,0,100);
	int rx=30,ry=20,h=50,k=50;
	int x=0,y=ry;
	double p=(double)(ry*ry-2*rx*rx*ry+0.25*rx*rx);
	glColor3f(0,0,1);
		glBegin(GL_POINTS);
	
		glPointSize(10.0);
	while(2*ry*ry*x<=2*rx*rx*y)
	{
	
		glVertex2d(x+h,y+k);
		glVertex2d(-x+h,y+k);
		glVertex2d(x+h,-y+k);
		glVertex2d(-x+h,-y+k);
		if(p<0)
		{
			x++;
			p=p+2*x*ry*ry+ ry*ry;
		}
		else{
			x++;y--;
			p=p+ 2*ry*ry*x- 2*rx*rx*y+ ry*ry;
		}
	}
	while(y!=0)
	{ 
		glVertex2d(x+h,y+k);
		glVertex2d(-x+h,y+k);
		glVertex2d(-x+h,-y+k);
		glVertex2d(x+h,-y+k);
		if(p>0)
		{
			y--;
		p=p- 2*rx*rx*y+ rx*rx;		
		}
		else{
			y--;
			x++;
			p=p+ 2*ry*ry*x - 2*rx*rx*y +rx*rx;
		}
	}
	glEnd();
	glFlush();
}
int main(int a, char** b) 
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("ellipse");
glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
