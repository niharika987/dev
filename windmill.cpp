
#include<iostream>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
using namespace std;


void display()
{
//	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);
	glVertex2f(0,0);
	glVertex2f(0.05,-0.7);
	glVertex2f(-0.05,-0.7);
	glEnd();
	glRotatef(25,0,0,1);
	glBegin(GL_TRIANGLES);
		glVertex2f(0,0);
	glVertex2f(-0.05,0.3);
	glVertex2f(0.05,0.7);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(0,0);
	glVertex2f(-0.25,-0.2);
	glVertex2f(-0.30,-0.15);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(0,0);
	glVertex2f(0.25,-0.2);
	glVertex2f(-0.3,-0.15);
	glEnd();
	
	glFlush();
	
	
}

int main(int a,char **b)
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("WINDMILL");

	glutMainLoop();
	
}
