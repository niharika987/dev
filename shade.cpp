#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//	glPushMatrix();
glColor3f(1,0,0);
	glutSolidSphere(0.2,20,20);
//	glPopMatrix();
	
//	glPushMatrix();
glColor3f(1,1,0);
	glTranslatef(0.3,0.0,0.0);
	glRotatef(45,0,1,0);
	glutSolidCone(0.1,0.5,20,20);
//	glPopMatrix();
	glFlush();
	
}
void init()
{
	GLfloat black[]={0.0,0.0,0.0,1.0};
	GLfloat white[]={1.0,1.0,1.0,1.0};
	GLfloat yellow[]={1.0,1.0,0.0,1.0};
	GLfloat cyan[]={0.0,1.0,1.0,1.0};
	GLfloat direction[]={1.0,1.0,0.0,0.0};
	
	glMaterialfv(GL_FRONT,GL_AMBIENT_AND_DIFFUSE,cyan);
	glMaterialfv(GL_FRONT,GL_SPECULAR,white);
	glMaterialf(GL_FRONT,GL_SHININESS,50);
	
	glLightfv(GL_LIGHT0,GL_AMBIENT,black);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,yellow);
	glLightfv(GL_LIGHT0,GL_SPECULAR,white);
		glLightfv(GL_LIGHT0,GL_POSITION,direction);
		
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glEnable(GL_DEPTH_TEST);
}
int main(int a, char** b)
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE| GLUT_DEPTH);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("shade");
glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
	
}
