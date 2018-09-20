#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<stdlib.h>

GLubyte name[] = {

	0xff, 0xd8, 0xff, 0xe1, 0xff, 0xfe, 0x45, 0x78, 0x69, 0x66, 0x00, 0x00,
  0x49, 0x49, 0x2a, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x0f, 0x01,
  0x02, 0x00, 0x12, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x10, 0x01,
  0x02, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x12, 0x01,
  0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x01,
  0x05, 0x00, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x1b, 0x01
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
