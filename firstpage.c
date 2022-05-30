#include<stdio.h>
#include<GL/glut.h>
void output(const char *s){
	int k;
	for(k=0;k<strlen(s);k++){
		glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
	}
}
float x;
float y=0;
void timer(int v){
	x=x+0.2;
	glutPostRedisplay();
	glutTimerFunc(100,timer,0);
}
void timer1(int v){
	if(y==0){
		y=1;
	}else{
		y=0;
	}
	glutPostRedisplay();
	glutTimerFunc(600,timer1,0);
}

void stars(){
	
	glColor3f(1.0,1.0,1.0);	

	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2f(142,78);
	glVertex2f(147,72);
	glVertex2f(148,96);
	glVertex2f(10,69);
	glVertex2f(16,87);
	glVertex2f(19,66);
	glVertex2f(24,90);
	glVertex2f(27,67);
	glVertex2f(29,77);
	glVertex2f(33,64);
	glVertex2f(35,93);
	glVertex2f(48,66);
	glVertex2f(46,91);
	glVertex2f(53,66);
	glVertex2f(63,63);
	glVertex2f(66,97);
	glVertex2f(69,68);
	glVertex2f(90,90);
	glVertex2f(92,82);
	glVertex2f(95,62);
	glVertex2f(165,65);
	glVertex2f(105,74);
	glVertex2f(112,89);
	glVertex2f(122,59);
	glVertex2f(128,82);
	glVertex2f(125,59);
	glVertex2f(102,54);
	glVertex2f(175,65);
	glVertex2f(170,75);
	glVertex2f(190,66);
	glVertex2f(195,84);
	glVertex2f(180,80);
	glVertex2f(184,66);
	glVertex2f(185,84);
	glVertex2f(170,93);
	glVertex2f(177,73);
	glVertex2f(160,73);
	glVertex2f(164,89);
	glVertex2f(167,78);
	glVertex2f(150,95);
	glVertex2f(158,95);
	glVertex2f(123,77);
	glVertex2f(127,63);
	glVertex2f(133,87);
	glVertex2f(138,83);
	glVertex2f(115,49);
	glEnd();
	
	glPointSize(3+y);
	glBegin(GL_POINTS);
	glVertex2f(118,66);
	glVertex2f(14,54);
	glVertex2f(38,84);
	glVertex2f(41,55);
	glVertex2f(55,87);
	glVertex2f(80,70);
	glEnd();

	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2f(183,97);
	glVertex2f(145,66);
	glVertex2f(5,98);
	glVertex2f(8,89);
	glVertex2f(50,80);
	glVertex2f(58,72);
	glVertex2f(72,82);
	glVertex2f(76,58);
	glVertex2f(84,56);
	glVertex2f(87,87);
	glEnd();

}
void tree(){

	
//	glBegin(GL_POLYGON);
//	glColor3f(0.0,0.0,0.0);		
//	glVertex2f(188,0.0);
//	glVertex2f(190,0.0);
//	glVertex2f(190,40);
//	glVertex2f(188,40);
//	glEnd();
	
	//triangle tree2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(7.5,33);
	glVertex2f(15.5,33);
	glVertex2f(11.5,36);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(8.5,35);
	glVertex2f(14.5,35);
	glVertex2f(11.5,38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(9.5,37);
	glVertex2f(13.5,37);
	glVertex2f(11.5,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(11.2,31);
	glVertex2f(12.0,31);
	glVertex2f(12.0,35);
	glVertex2f(11.2,35);
	glEnd();
	
	//triangle tree3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(11.5,33);
	glVertex2f(19.5,33);
	glVertex2f(15.5,36);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(12.5,35);
	glVertex2f(18.5,35);
	glVertex2f(15.5,38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(13.5,37);
	glVertex2f(17.5,37);
	glVertex2f(15.5,40);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(15.2,31);
	glVertex2f(16.0,31);
	glVertex2f(16.0,35);
	glVertex2f(15.2,35);
	glEnd();
	
	//triangle tree1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(-3.5,32.5);
	glVertex2f(10,32.5);
	glVertex2f(3,38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(-2.0,36.0);
	glVertex2f(8.0,36.0);
	glVertex2f(3,42);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(-0.2,39.3);
	glVertex2f(6.5,39.3);
	glVertex2f(3,44);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(2.0,31);
	glVertex2f(3.6,31);
	glVertex2f(3.6,35);
	glVertex2f(2.0,35);
	glEnd();
}
void moon(){
	glColor3f(0.078,0.023,0.148);
	glPushMatrix();
	glTranslatef(30.0,80.0,0.0);
	glutSolidSphere(10,200,200);	
	glPopMatrix();
}
void moon1(){
	//main
	glColor3ub(222,215,231);
	glPushMatrix();
	glTranslatef(35.0,70.0,0.0);
	glutSolidSphere(13,200,200);	
	glPopMatrix();

	//patterns
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(37.0,59.0,0.0);
	glScalef(1.0,0.8,1.0);
	glutSolidSphere(1.5,200,200);	
	glPopMatrix();
	glColor3ub(222,215,231);
	glPushMatrix();
	glTranslatef(37.0,59.0,0.0);
	glScalef(1.0,0.6,1.0);
	glutSolidSphere(1.5,200,200);	
	glPopMatrix();
	
	
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(28.0,63.0,0.0);
	glRotatef(-20.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(30,63.0,0.0);
	glRotatef(10.0,0.0,0.0,1.0);
	glScalef(1.0,0.4,1.0);
	glutSolidSphere(2,200,200);	
	glPopMatrix();
	
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(40.0,62.0,0.0);
	glRotatef(-20.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(42,61.0,0.0);
	glRotatef(10.0,0.0,0.0,1.0);
	glScalef(1.0,0.4,1.0);
	glutSolidSphere(2,200,200);	
	glPopMatrix();
	
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(43.5,71.0,0.0);
	glScalef(1.0,0.3,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(45.5,73.0,0.0);
	glScalef(0.5,0.8,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	glPushMatrix();
	glTranslatef(44,72.0,0.0);
	glRotatef(-120.0,0.0,0.0,1.0);
	glScalef(0.4,0.4,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(40,80.0,0.0);
	glRotatef(60.0,0.0,0.0,1.0);
	glScalef(0.3,0.8,1.0);
	glutSolidSphere(5,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(43.7,77.0,0.0);
	glRotatef(-140.0,0.0,0.0,1.0);
	glScalef(0.3,0.8,1.0);
	glutSolidSphere(5,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(38,78.8,0.0);
	glRotatef(50.0,0.0,0.0,1.0);
	glScalef(0.2,0.7,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(35.5,79.8,0.0);
	glRotatef(150.0,0.0,0.0,1.0);
	glScalef(0.3,0.6,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(35,81.5,0.0);
	glRotatef(100.0,0.0,0.0,1.0);
	glScalef(0.3,0.7,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(35,68,0.0);
	glRotatef(-150.0,0.0,0.0,1.0);
	glScalef(0.3,0.7,1.0);
	glutSolidSphere(5,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(33,70,0.0);
	glRotatef(80.0,0.0,0.0,1.0);
	glScalef(0.3,0.7,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(32.5,67.5,0.0);
	glRotatef(80.0,0.0,0.0,1.0);
	glScalef(0.4,0.6,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(35.5,69.5,0.0);
	glRotatef(60.0,0.0,0.0,1.0);
	glScalef(0.4,0.6,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(37,67.5,0.0);
	glRotatef(90.0,0.0,0.0,1.0);
	glScalef(0.3,0.7,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(26.0,75.0,0.0);
	glRotatef(-120.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(28.5,78.5,0.0);
	glRotatef(-140.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(30.5,73.5,0.0);
	glRotatef(-40.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(28.0,75.0,0.0);
	glRotatef(-60.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
	glPushMatrix();
	glColor3ub(188,161,205);
	glTranslatef(31.0,71.0,0.0);
	glRotatef(-60.0,0.0,0.0,1.0);
	glScalef(0.9,0.4,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	
	//inside top sphere 
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(29.0,75.0,0.0);
	glutSolidSphere(3.5,200,200);	
	glPopMatrix();
	glColor3ub(222,215,231);
	glPushMatrix();
	glTranslatef(29.0,75.0,0.0);
	glScalef(1.0,0.8,1.0);
	glutSolidSphere(3.5,200,200);	
	glPopMatrix();
	
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(42.0,73.0,0.0);
	glutSolidSphere(1.5,200,200);	
	glPopMatrix();
	glColor3ub(222,215,231);
	glPushMatrix();
	glTranslatef(42.0,73.0,0.0);
	glScalef(1.0,0.8,1.0);
	glutSolidSphere(1.5,200,200);	
	glPopMatrix();
	
	glColor3ub(188,161,205);
	glPushMatrix();
	glTranslatef(24.0,68.0,0.0);
	glutSolidSphere(1.0,200,200);	
	glPopMatrix();
	glColor3ub(222,215,231);
	glPushMatrix();
	glTranslatef(24.0,68.0,0.0);
	glScalef(1.0,0.8,1.0);
	glutSolidSphere(1.0,200,200);	
	glPopMatrix();
	
    glColor3ub(0,0,100);
	glPushMatrix();
	glTranslatef(10.0,90.0,0.0);
	glScalef(0.055,0.055,0.0);
	glLineWidth(4);
	output("Mangalore Institute of Technology and Engineering");
	glPopMatrix();
	
	glColor3ub(0,0,205);
	glPushMatrix();
	glTranslatef(30.0,80.0,0.0);
	glScalef(0.04,0.04,0.0);
	glLineWidth(2);
	output("Department of Computer Science and Engineering");
	glPopMatrix();
	
	glColor3ub(245,255,250);
	glPushMatrix();
	glTranslatef(57.0,60.0,0.0);
	glScalef(0.07,0.06,0.0);
	glLineWidth(4);
	output("Phases of Moon");
	glPopMatrix();
	
	glColor3ub(210,105,30);
	glPushMatrix();
	glTranslatef(50.0,40.0,0.0);
	glScalef(0.05,0.03,0.0);
	glLineWidth(3);
	output("UNDER THE GUIDANCE OF");
	glPopMatrix();
	
	glColor3ub(176,196,222);
    glPushMatrix();
	glTranslatef(70.0,30.0,0.0);
	glScalef(0.05,0.03,0.0);
	glLineWidth(3);
	output("Sunitha N V");
	glPopMatrix();

    glColor3ub(0,255,255);
	glPushMatrix();
	glTranslatef(10.0,30.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("Pradeep");
	glPopMatrix();
	
	glColor3ub(255,69,0);
	glPushMatrix();
	glTranslatef(10.0,20.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("4MT19CS107");
	glPopMatrix();
	
	glColor3ub(0,255,255);
	glPushMatrix();
	glTranslatef(155.0,30.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("Karthik N.P");
	glPopMatrix();
	
	glColor3ub(255,69,0);
	glPushMatrix();
	glTranslatef(155.0,20.0,0.0);
	glScalef(0.05,0.04,0.0);
	glLineWidth(3);
	output("4MT19CS067");
	glPopMatrix();
	

}
void display(void){
	glClear(GL_COLOR_BUFFER_BIT);




	//sky
	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3ub(138,80,121);	
	glVertex2f(0.0,0.0);
	glVertex2f(200,0.0);
	//glColor3f(0.0,0.0,0.0);
	glVertex2f(200,200);
	glVertex2f(0.0,200);
	glEnd();
	
	//river
	glBegin(GL_POLYGON);
	glColor3ub(115,74,116);	
	//glColor3ub(140,132,156);
	glVertex2f(0.0,0.0);
	glVertex2f(200,0.0);
	glVertex2f(200,40);
	glVertex2f(0.0,40);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);	
	glVertex2f(0.0,0.0);
	glVertex2f(200,0.0);
	glColor3ub(115,74,116);
	glVertex2f(200,5);
	glVertex2f(0.0,5);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.0,0.2);	
	glVertex2f(-10,30);
	glVertex2f(200,30);
	glVertex2f(200,50);
	glVertex2f(-10,40);
	glEnd();

	//3 mountains
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.0,0.2);	
	glVertex2f(120,45);
	glVertex2f(240,45);
	glVertex2f(160,60);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.0,0.2);	
	glVertex2f(-40,30);
	glVertex2f(80,40);
	glVertex2f(20,52);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.0,0.2);	
	glVertex2f(20,40);
	glVertex2f(140,40);
	glVertex2f(80,50);
	glEnd();
	
	//mountain shodow
//	glBegin(GL_POLYGON);
//	glColor3f(0.08,0.08,0.09);	
//	glVertex2f(50,30);
//	glVertex2f(120,30);
//	glVertex2f(80,22);
//	glEnd();
//	
//	glBegin(GL_POLYGON);
//	glColor3f(0.08,0.08,0.09);	
//	glVertex2f(-40,30);
//	glVertex2f(40,30);
//	glVertex2f(10,22);
//	glEnd();
//	
//	glBegin(GL_POLYGON);
//	glColor3f(0.08,0.08,0.09);
//	glVertex2f(10,30);
//	glVertex2f(70,30);
//	glVertex2f(40,22);
//	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.08,0.08);	
	glVertex2f(-20,30);
	glVertex2f(240,30);
	glVertex2f(240,40);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.08,0.08,0.09);	
	glVertex2f(-40,30);
	glVertex2f(250,30);
	glVertex2f(250,25);
	glEnd();	
	
	stars();
	tree();
	moon1();
	glFlush();
}
int main(int argc,char **argv){
	glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1400,700);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Introduction page");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,200.0,0.0,100.0,0.0,100.0);
	glutDisplayFunc(display);
	timer(0);
	timer1(0);
	glutMainLoop();
}
