#include<GL/glut.h>
float frameNumber = 0;
int ch=0,c=0;
void drawWindmill() {
	int i;
	glColor3f(0.8f, 0.8f, 0.9f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();
	glTranslatef(0, 3, 0);
	glRotated(frameNumber * (180.0/46), 0, 0, 1);
	glColor3f(0.2f, 0.4f,0.2f);
	glutSolidSphere(0.1,30,30);
	for (i = 0; i < 3; i++)
	{
		glRotated(120, 0, 0, 1);  // Note: These rotations accumulate.
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0.5f, 0.1f);
		glVertex2f(1.5f,0);
		glVertex2f(0.5f, -0.1f);
		glEnd();

	}
}
void drawStoppedWindmill() {
	int i;
	glColor3f(0.8f, 0.8f, 0.9f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();
	glTranslatef(0, 3, 0);
	//glRotated(frameNumber * (180.0/46), 0, 0, 1);
	glColor3f(0.2f, 0.4f,0.2f);

	glutSolidSphere(0.1,30,30);
	for (i = 0; i < 3; i++)
	{
		glRotated(120, 0, 0, 1);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0.5f, 0.1f);
		glVertex2f(1.5f,0);
		glVertex2f(0.5f, -0.1f);
		glEnd();

	}
}
void lightson(void)
{
	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex3f(2.3,4.8,0.0);
		glVertex3f(2.3,4.2,0.0);
		glVertex3f(2.7,4.2,0.0);
		glVertex3f(2.7,4.8,0.0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(2.0,1.0);
		glVertex2f(2.0,2.5);
		glVertex2f(3.0,2.5);
		glVertex2f(3.0,1.0);
	glEnd();
	glFlush();
}
void lightsoff(void)
{
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(2.3,4.8);
		glVertex2f(2.3,4.2);
		glVertex2f(2.7,4.2);
		glVertex2f(2.7,4.8);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(2.0,1.0);
		glVertex2f(2.0,2.5);
		glVertex2f(3.0,2.5);
		glVertex2f(3.0,1.0);
	glEnd();
	glFlush();
}

void drawmountain()
{
	glColor3f(0, 0.6f, 0.2f);
		glBegin(GL_POLYGON);
		glVertex2f(-3,-1);
		glVertex2f(1.5f,1.65f);
		glVertex2f(5,-1);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(-3,-1);
		glVertex2f(3,2.1f);
		glVertex2f(7,-1);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(0,-1);
		glVertex2f(6,1.2f);
		glVertex2f(20,-1);
		glEnd();


}
void drawhouse(int ch)
{
		glBegin(GL_POLYGON);
			if(c==0)
				glColor3f(1.0,0.0,0.5);
			else
			{
					glColor3f(0.0,0.5,1.0);
			}
			glVertex2f(1.0,4.0);
			glVertex2f(1.0,1.0);
			glVertex2f(4.0,1.0);
			glVertex2f(4.0,4.0);
		glEnd();

		glBegin(GL_POLYGON);
		if(c==0)
			glColor3f(1.0,0.0,0.5);
		else
			glColor3f(0.0,0.5,1.0);
			glVertex2f(4.0,4.0);
			glVertex2f(4.0,1.0);
			glVertex2f(8.0,2.0);
			glVertex2f(8.0,5.0);
		glEnd();

		glBegin(GL_POLYGON);
		if(c==0)
			glColor3f(1.0,0.0,0.5);
		else
			glColor3f(0.0,0.5,1.0);
			glVertex2f(4.0,4.0);
			glVertex2f(2.5,5.5);
			glVertex2f(1.0,4.0);
		glEnd();

		glBegin(GL_POLYGON);
			glColor3f(0.4,0.1,0.0);
			glVertex2f(4.0,4.0);
			glVertex2f(2.5,5.5);
			glVertex2f(6.5,6.5);
			glVertex2f(8.0,5.0);
		glEnd();

		glBegin(GL_LINE_STRIP);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(1.0,4.0);
			glVertex2f(1.0,1.0);
			glVertex2f(4.0,1.0);
			glVertex2f(4.0,4.0);
		glEnd();

		glBegin(GL_LINE_STRIP);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(4.0,4.0);
			glVertex2f(4.0,1.0);
			glVertex2f(8.0,2.0);
			glVertex2f(8.0,5.0);
		glEnd();

		glBegin(GL_LINE_STRIP);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(4.0,4.0);
			glVertex2f(2.5,5.5);
			glVertex2f(1.0,4.0);
		glEnd();

		glBegin(GL_LINE_STRIP);
			glColor3f(0.0,0.0,0.0);
			glVertex2f(4.0,4.0);
			glVertex2f(2.5,5.5);
			glVertex2f(6.5,6.5);
			glVertex2f(8.0,5.0);
		glEnd();
		if(ch==1)
		{
			lightson();
		}
		else
		{
			lightsoff();
		}
		glFlush();
}
void doFrame(int v) {
    frameNumber++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}
void drawmountains()
{
	glPushMatrix();
	glScaled(1.0,1.0,1);
	drawmountain();
	glPopMatrix();
	glFlush();
}
void drawhouses(int ch)
{
	glPushMatrix();
		glTranslated(4,0.5,1);
		glScaled(0.2,0.22,1);
		drawhouse(ch);
		glPopMatrix();
		glFlush();
}
void firstwindmill(int ch)
{
    glPushMatrix();
		glTranslated(0.75,1,1.0);
		glScaled(0.6,0.6,1);
		if(ch==1)
            drawWindmill();
        else
            drawStoppedWindmill();
		glPopMatrix();
}
void secondwindmill(int ch)
{
    glPushMatrix();
		glTranslated(2.2,1.6,1.0);
		glScaled(0.4,0.4,1);
		if(ch==1)
            drawWindmill();
        else
            drawStoppedWindmill();
		glPopMatrix();
}
void thirdwindmill(int ch)
{
   glPushMatrix();
		glTranslated(3.7,0.8,1.0);
		glScaled(0.7,0.7,1);
		if(ch==1)
            drawWindmill();
        else
            drawStoppedWindmill();
		glPopMatrix();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT); // Fills the scene with blue.
		glLoadIdentity();
		drawmountains();
		firstwindmill(ch);
		secondwindmill(ch);
		thirdwindmill(ch);
		drawhouses(ch);
		glutSwapBuffers();
}
void init() {
	glClearColor(0.5f, 0.5f, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 7, -1, 4, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}
void mouse(int button,int state,int x,int y)
{

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
        glutTimerFunc(0,doFrame,0);
		ch=1;
	}
	else if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		ch=0;
		drawhouses(ch);
	}
}
void keyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 'b':
			c=1;
			break;
		case 'p':
			c=0;
			break;
		break;
	}
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(1920,1080);
	glutInitWindowPosition(300,200);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutCreateWindow("Hz");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	init();
	glutPostRedisplay();
	glutMainLoop();
	return 0;
}
