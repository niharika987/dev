#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1,1,0);
	glVertex2f(0,-0.5);
	glVertex2f(0,0.5);
	glVertex2f(0.5,0);
	glEnd();
	glFlush();
}
void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON)
	{
		glRotatef(45,0,0,1);
		glutPostRedisplay();
	}
}
void keyb(unsigned char key,int x,int y)
{
if(key=='m')
{
	glTranslatef(0.0,0.1,0.0);
	glutPostRedisplay();
}

}
int main(int a, char** b)
{   
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
		glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("tranform");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyb);
	glutMainLoop();

	
}
