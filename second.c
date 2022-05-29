#include<stdio.h>
#include<GL/glut.h>

float x;
float y=0,z=0;
float a=0,b=0,c=0,i=0,d=0,e=0,f=0;
void timer(int v){
	x=x+0.2;
	glutPostRedisplay();
	glutTimerFunc(80,timer,0);
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
void timer3(int v){
	if(z==0){
		z=1;
	}else{
		z=0;
	}
	glutPostRedisplay();
	glutTimerFunc(400,timer3,0);
}
void timer2(int v){
	a=a+0.2;
	b=b+0.5;
	c=c+0.02;
	if(i>300){
		d=d+0.2;
		e=e+0.5;
		f=f+0.02;
	}
	
	i++;
	glutPostRedisplay();
	glutTimerFunc(30,timer2,0);
}
void background(){
	//sky
	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3ub(138,80,121);	
	glVertex2f(0.0,0.0);
	glVertex2f(200,0.0);
	//glColor3f(0.0,0.0,0.0);
	glVertex2f(200,100);
	glVertex2f(0.0,100);
	glEnd();
	
	//river
	glBegin(GL_POLYGON);
	glColor3ub(115,74,116);	
	//glColor3ub(31,19,31);
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
	
	
	
	//black strip
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
}

void mountain(){
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
	glBegin(GL_POLYGON);
	glColor3ub(66,41,66);	
	glVertex2f(100,30);
	glVertex2f(240,30);
	glVertex2f(160,22);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(66,41,66);	
	glVertex2f(-80,30);
	glVertex2f(80,30);
	glVertex2f(20,22);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(66,41,66);
	glVertex2f(20,30);
	glVertex2f(140,30);
	glVertex2f(80,22);
	glEnd();
}

void house(){
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(26,32);
	glVertex2f(42,32);
	glVertex2f(42,37);
	glVertex2f(26,37);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(24,35);
	glVertex2f(36,35);
	glVertex2f(30,42);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(34,37);
	glVertex2f(44,37);
	glVertex2f(40,42);
	glVertex2f(30,42);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.0,0.2);	
	glVertex2f(38,34);
	glVertex2f(40,34);
	glVertex2f(40,36);
	glVertex2f(38,36);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);	
	glVertex2f(31,42);
	glVertex2f(33,42);
	glVertex2f(33,44);
	glVertex2f(31,44);
	glEnd();
}

void stars(){
	
	glColor3f(1.0,1.0,1.0);	

	glPointSize(2);
	glBegin(GL_POINTS);
	glVertex2f(147,72);
	glVertex2f(148,96);
	glVertex2f(10,69);
	glVertex2f(19,66);
	glVertex2f(27,67);
	glVertex2f(29,77);
	glVertex2f(33,64);
	glVertex2f(48,66);
	glVertex2f(46,91);
	glVertex2f(53,66);
	glVertex2f(63,63);
	glVertex2f(69,68);
	glVertex2f(90,90);
	glVertex2f(95,62);
	glVertex2f(165,65);
	glVertex2f(105,74);
	glVertex2f(112,89);
	glVertex2f(122,59);
	glVertex2f(128,82);
	glVertex2f(102,54);
	glVertex2f(175,65);
	glVertex2f(170,75);
	glVertex2f(195,84);
	glVertex2f(180,80);
	glVertex2f(185,84);
	glVertex2f(170,93);
	glVertex2f(160,73);
	glVertex2f(167,78);
	glVertex2f(150,95);
	glVertex2f(158,95);
	glVertex2f(123,77);
	glVertex2f(127,63);
	glVertex2f(138,83);
	glVertex2f(115,49);
	glEnd();
	
	glPointSize(2+z);
	glBegin(GL_POINTS);
	glVertex2f(142,78);
	glVertex2f(16,87);
	glVertex2f(24,90);
	glVertex2f(35,93);
	glVertex2f(66,97);
	glVertex2f(92,82);
	glVertex2f(125,59);
	glVertex2f(133,87);
	glVertex2f(164,89);
	glVertex2f(177,73);
	glVertex2f(184,66);
	glVertex2f(190,66);
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
	//main tree
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(179,0.0);
	glVertex2f(183,0.0);
	glVertex2f(182,60);
	glVertex2f(180,60);
	glEnd();
	//left-top branch
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(165,69);
	glVertex2f(182,59);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(175,70);
	glVertex2f(172,65);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(177,62);
	glVertex2f(170,60);
	glEnd();
	//Right-top branch
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(197,62);
	glVertex2f(180,50);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(193,59);
	glVertex2f(191,63);
	glEnd();
	glLineWidth(12);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(190,69);
	glVertex2f(181,60);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(185,64);
	glVertex2f(183,68);
	glEnd();
	//left-bottom branch
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(160,49);
	glVertex2f(181,40);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(175,42);
	glVertex2f(167,38);
	glEnd();
	glLineWidth(7);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(165,50);
	glVertex2f(167,46);
	glEnd();
	//left-middle branch
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(167,56);
	glVertex2f(181,50);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(176,55);
	glVertex2f(174,53);
	glEnd();
	//Right-middle branch
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(195,45);
	glVertex2f(182,35);
	glEnd();
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(190,41);
	glVertex2f(188,48);
	glEnd();
	glLineWidth(6);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);		
	glVertex2f(191,35.9);
	glVertex2f(184,36.5);
	glEnd();
	
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

}
void rocks(){
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(3,3,0);
	glScalef(1.0,0.7,1.0);
	glutSolidSphere(5,200,200);	
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20,2,0);
	glScalef(1.0,0.4,1.0);
	glutSolidSphere(5,200,200);	
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11,2,0);
	glScalef(1.0,0.5,1.0);
	glutSolidSphere(4,200,200);	
	glPopMatrix();
	glPushMatrix();
	glTranslatef(9,5,0);
	glScalef(1.0,0.5,1.0);
	glutSolidSphere(2,200,200);	
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,7.5,0);
	glScalef(1.0,0.5,1.0);
	glutSolidSphere(3,200,200);	
	glPopMatrix();
}

void shootingstar(){
	if(i>40 && i<140){
		glLineWidth(1);
		glBegin(GL_LINES);
		glColor3f(255,255,255);	
		glVertex2f(170-b,88-a);
		glVertex2f(178-b-c,91-a);
		glEnd();
	}
	if(i>300 && i<400){
		glLineWidth(1);
		glBegin(GL_LINES);
		glColor3f(255,255,255);	
		glVertex2f(130-e,88-d);
		glVertex2f(138-e-f,91-d);
		glEnd();
	}
	
}

void boat(){
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);	
	glVertex2f(6+x,18);
	glVertex2f(17+x,18);
	glVertex2f(20+x,21);
	glVertex2f(03+x,21);
	glEnd();
	
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(8+x,21,0);
	glScalef(0.5,1.0,1.0);
	glutSolidSphere(2,200,200);	
	glPopMatrix();
	
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(8+x,23.6,0);
	glScalef(0.8,1.0,1.0);
	glutSolidSphere(1,200,200);	
	glPopMatrix();
}


void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	
	background();
	shootingstar();
	mountain();
	
	stars();
	
	tree();
	house();
	moon1();
	
	boat();
	rocks();
	glFlush();
}
int main(int argc,char **argv){

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1400,700);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Second page");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,200.0,0.0,100.0,0.0,100.0);
	glutDisplayFunc(display);
	timer(0);
	timer1(0);
	timer2(0);
	timer3(0);
	glutMainLoop();
}
