#include<GL/glut.h>
GLubyte name1[]={
	0x78,0x1f,
	0x78,0x7f,
	0x78,0xef,
	0x79,0x8f,
	0x7b,0x8f,
	0x7b,0x0f,
	0x7e,0x0f,
	0x7e,0x0f,
	        0x7e,0x0f,
	0x7e,0x0f,
	0x7e,0x0f,
	0x7e,0x0f,   
		0x00,0x00,
	0x00,0x00,                                                       
};
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBitmap(16,16,-200.0,-200.0,0.0,0.0,name1);
	glFlush();
}
int main(int a, char** b)
{
	glutInit(&a,b);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("name");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
