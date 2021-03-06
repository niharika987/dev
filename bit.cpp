#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<stdlib.h>

GLubyte name[] = {
	
	   0x00,0x00,0x00,0x00,
	0x1c,0x03,0xfe,0x63,
	0x1c,0x03,0xfe,0x63,
	0xc0,0x30,0x0c,0x0,
	0xc0,0x30,0x0c,0x03,
	0xc0,0x30,0x0c,0x03,
	0xc0,0x30,0x0c,0x03,
	0xc0,0x30,0x0c,0x03,
	0xc0,0x3f,0x8c,0x03,
	0xc0,0x3f,0x8c,0x03,
	0xc0,0x31,0x8c,0x03,
	0xc0,0x31,0x8c,0x03,
	0xc0,0x31,0x8c,0x03,
	0xc0,0x31,0x8c,0x03,
	0xc0,0x3f,0x8c,0x03,
	0xc0,0x3f,0x8c,0x03
	 
};
  
  void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f (1.0, 1.0, 1.0);
   glBitmap (32, 16, -200.0, -200.0, 0.0, 0.0, name);
   glFlush();
}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(500, 550);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("Bitmap");
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
