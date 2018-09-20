#include<GL/glut.h>
GLubyte name1[]={
              0xdb,0x0d,0xb6,0x38,
              0xdb,0x0d,0xb6,0x38,
              0xdb,0x0d,0xb6,0x78,
              0xfb,0x0d,0xb6,0x78,
              0xfb,0x6d,0xf6,0xd0,
              0xdb,0xfd,0xb6,0xd8,
              0xdb,0x9d,0xb7,0x98,
              0xfb,0x0d,0xf6,0x18,
			                                           
};
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBitmap(32,8,-200.0,-200.0,0.0,0.0,name1);
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
