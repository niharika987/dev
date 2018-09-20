#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
int frame=0;
void draw()
{

	glTranslated(0,3,0);
	glRotated(frame*(180.0/46),0,0,1);                                                         
	glColor3f(1,1,0);
	for(int i=0;i<3;i++)
	{
		glRotated(120,0,0,1);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0.5,0.4);
		glVertex2f(0.5,0);
		glVertex2f(0.5,-0.4);
			glEnd();
	}

}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
//glLoadIdentity();
	
	
glPushMatrix();
	glTranslated(2.2,1.6,0);
	glScaled(0.4,0.4,1);
		glBegin(GL_POLYGON);
		glColor3f(0.8f,0.8f,0.9f);

	glVertex2f(-0.3,0);
	glVertex2f(0.3,0);
	glVertex2f(0.3,3);
		glVertex2f(-0.3,3);
	glEnd();
	draw();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(3.5,1.6,0);
	glScaled(0.2,0.2,1);
	draw();
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(5.2,1.6,0);
	glScaled(0.3,0.3,1);
	draw();
	glPopMatrix();
glutSwapBuffers();
}

void doFrame(int v) {
    frame++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}


void init() {
	glClearColor(0.5f, 0.5f, 1, 1);
		// The next three lines set up the coordinates system. 
// 	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
   	glOrtho(0, 7, -1, 4, -1, 1);
//	glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(100,100);  
    glutCreateWindow("OpenGL Hierarchical Modeling 2D Example"); 

    init();

    glutDisplayFunc(display);   
  glutTimerFunc(200,doFrame,0); 

    glutMainLoop(); 
    return 0;
}    

