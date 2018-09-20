#include<Gl/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
double ang=45,i=0.1;
void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON)
	{
	ang=ang+10;
	i=i+0.1;
	}
	if(btn==GLUT_RIGHT_BUTTON)
	{
	
	i=i+0.1;
	}
}
void abc(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
//	glPushMatrix();
	glTranslatef(i,0,0);
	glRotatef(ang,1,0,0);
	glBegin(GL_POLYGON);
   glVertex2f(0.5,0);
	glVertex2f(0.5,0.5);
	glVertex2f(-0.5,0.5);
	glVertex2f(-0.5,0);
//glPopMatrix();
	glutSolidSphere(0.1,50,50);

	glEnd();
	glutSwapBuffers();
	glFlush();
	
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("obj");
	glutMouseFunc(mouse);
	glutIdleFunc(abc);
	glutDisplayFunc(abc);
	glutMainLoop();
return 0;	
}
