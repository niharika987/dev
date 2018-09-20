#include<GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glutWireSphere(0.4,50,8);
	
	glPopMatrix();
	glPushMatrix();
	glTranslated(0.15,0.0,0.0);
	glutWireSphere(0.02,50,8);
	
	glPopMatrix();
	glFlush();
} int a;
void keyb(unsigned char b,int x,int y)
{
	if(b =='r')
	a=1;
}

void t1(int v)
{
	if(a==1)
	{
		glRotatef(45,0.0,0.0,1.0);
	}
	glutPostRedisplay();
	glutTimerFunc(200,t1,0);
}
int main(int a,char** b)
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(600,600);
	glutCreateWindow("sphere");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyb);
	glutTimerFunc(200,t1,0);
	glutMainLoop();
	
}
