#include<stdio.h>
#include<GL/glut.h>

void output(char *s){
	int k;
	for(k=0;k<strlen(s);k++){
		glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
	}
}
void display(void){
	
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(10.0,90.0,0.0);
	glScalef(0.055,0.055,0.0);
	glLineWidth(4);
	output("Mangalore Institute of Technology and Engineering");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(30.0,80.0,0.0);
	glScalef(0.04,0.04,0.0);
	glLineWidth(2);
	output("Department of Computer Science and Engineering");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(55.0,65.0,0.0);
	glScalef(0.07,0.06,0.0);
	glLineWidth(3);
	output("Phases of Moon");
	glPopMatrix();

	glPushMatrix();
	glTranslatef(10.0,50.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("Pradeep");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(10.0,40.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("4MT19CS107");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(155.0,50.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("Karthik N.P");
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(155.0,40.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("4MT19CS067");
	glPopMatrix();
	
	glFlush();
}
int main(int argc,char **argv){
	printf("Hello World");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1400,700);
	glutInitWindowPosition(0,0);
	glutCreateWindow("First page");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,200.0,0.0,100.0,0.0,100.0);
	glutDisplayFunc(display);
	glutMainLoop();
}

