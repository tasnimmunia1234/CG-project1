#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include<stdio.h>

/*#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <stdlib.h>
#include <math.h>
#include<stdio.h>*/

float cx=0,angle = 0,angle1=0;
float move_left_car =0;
float move_left_car_1 =0;
float move_right_car =0;
float move_right_car_1 =0;
float move_cloud=0;



void init(void)
{
    glClearColor(0,0,0,0);
    glOrtho(-10,+10,-10,+10,-5,+5);
}
void light(float r1, float r2)
{
    float angle=0.0;
    float x,y;
    int i;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle=(360*i)/500;
        x=r1*cos(angle);
        y=r2*sin(angle);
        glVertex2d(x,y);
    }
    glEnd();

}
void lampPost(){
    glPushMatrix();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.1, 2);
    glVertex2d(0.1, -1.2);
    glVertex2d(-0.1, -1.2);
    glVertex2d(-0.1, 2);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, 2.5, 0);
    light(0.5, 0.5);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -1.2, 0);
    glColor3f(0.42, 0.26, 0.13);
    glBegin(GL_POLYGON);
    glVertex2d(0.3, 0.2);
    glVertex2d(0.3, -0.05);
    glVertex2d(-0.3, -0.05);
    glVertex2d(-0.3, 0.2);
    glEnd();
    glPopMatrix();
    
    
}

void gress(){
    glColor3f(0, 23, 0.2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(3, 1.4);
    glVertex2d(1, 0);
    glEnd();
    
    glColor3f(0, 23, 0.2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(-2.4, 0.8);
    glVertex2d(-0.9, 0);
    glEnd();
    
}
void road(){
    
    glPushMatrix();
    glTranslated(1,-0.999, 0);
    glColor3f(0.20, 0.20, 0.20);
    glBegin(GL_POLYGON);
    glVertex2d(15, 1.3);
    glVertex2d(15, -1.3);
    glVertex2d(-15, -1.3);
    glVertex2d(-15, 1.3);
    glEnd();
    glPopMatrix();

    glTranslated(0.5, -1.5, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_LINE_LOOP);
    glVertex2d(15, 0.5);
    glVertex2d(-15, 0.5);
    glEnd();
}

void car_body()
{
    glColor3d(0,0,128);
    glBegin(GL_POLYGON);


    glVertex2d(2,2);

    glVertex2d(3,2);

    glVertex2d(3,0);

    glVertex2d(-3,0);

    glVertex2d(-3,2);

    glVertex2d(-2,2);

    glVertex2d(-2,3);

    glVertex2d(2,3);
    glEnd();
    
    glPushMatrix();
    glTranslated(-1.4, 1.2, 0);
    glColor3f(0.10, 0.15,0.15);
    glBegin(GL_POLYGON);
    glVertex2d(1.1, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 1.1);
    glVertex2d(1.1, 1.1);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.5, 1.2, 0);
    glColor3f(0.15, 0.15, 0.15);
    glBegin(GL_POLYGON);
    glVertex2d(1.1, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 1.1);
    glVertex2d(1.1, 1.1);
    glEnd();
    glPopMatrix();
    
    

}
void circle(float r1, float r2)
{
    float angle=0.0;
    float x,y;
    int i;
    glColor3f(1,0.54,0);
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle=(360*i)/500;
        x=r1*cos(angle);
        y=r2*sin(angle);
        glVertex2d(x,y);
    }
    glEnd();

}
void circle1(float r1, float r2)
{
    float angle1=0.0;
    float x,y;
    int i;
    glColor3f(1,0.54,0);
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle1=(360*i)/500;
        x=r1*cos(angle1);
        y=r2*sin(angle1);
        glVertex2d(x,y);
    }
    glEnd();

}

void sky()
{
    glPushMatrix();
    glColor3f(0.53f,0.807f,0.98f);
    glTranslated(0,13,1);
    glBegin(GL_QUADS);
    glVertex2d(-150.0,0.0);
    glVertex2d(150.0,0.0);
    glVertex2d(150.0,-8);
    glVertex2d(-150.0,-8);
    glEnd();
    glPopMatrix();

}
void soil(){
    glPushMatrix();
    glColor3f(0.72, 0.52, 0.04);
    glBegin(GL_POLYGON);
    glVertex2d(15,0.8);
    glVertex2d(15,-0.8);
    glVertex2d(-15,-0.8);
    glVertex2d(-15,0.8);
    glEnd();
    
    glPopMatrix();
    
}
void circle3(float r1,float r2){
    int i = 0;
    float x,y;
    float angle = 0;
    glColor3f(0, 0, 0);
    glBegin(GL_POINTS);
        for (i=0; i<=600; i++)
        {
            angle = (360 * i)/600;
            x=r1*cos(angle);
            y=r2*sin(angle);
            glVertex2d(x,y);
        }

    glEnd();
}
void circle4(float r1,float r2){
    int i = 0;
    float x,y;
    float angle = 0;
    //glColor3f(1.2,0.84,0.65);
    glColor3f(1.80,0.80,0.89);
    glBegin(GL_POLYGON);
        for (i=0; i<=600; i++)
        {
            angle = (360 * i)/600;
            x=r1*cos(angle);
            y=r2*sin(angle);
            glVertex2d(x,y);
        }

    glEnd();
}

void head(float r1,float r2){
    int i = 0;
    float x,y;
    float angle = 0;
    
    glColor3d(1.9, 1.5, 0.9);
    glBegin(GL_POLYGON);
        for (i=0; i<=600; i++)
        {
            angle = (360 * i)/600;
            x=r1*cos(angle);
            y=r2*sin(angle);
            glVertex2d(x,y);
        }

    glEnd();
}
void people(){
    //head
    glPushMatrix();
    glTranslated(-0.2, -0.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.3, 0);
    glVertex2d(0.3, 0.3);
    glVertex2d(0, 0.3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
   head(0.6, 0.6);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.3, 0.1, 0);
   circle(0.2, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.3, 0.1, 0);
   circle(0.2, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -0.3, 0);
  circle4(0.2, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -0.03, 0);
     circle3(0.02, 0.08);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.7, -2.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(1.3, 0);
    glVertex2d(1.3, 2);
    glVertex2d(0, 2);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glRotated(30, 1, 1, 0.5);
    glTranslated(-2.7 ,-6.11, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(2, 5.5);
    glVertex2d(2.2, 5.2);
    glVertex2d(1, 4.3);
    glVertex2d(0.8, 4.3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    //glRotated(30, 1, 1, 0.5);
    glTranslated(2.6 ,-6.3, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(-0.8, 4.3);
    glVertex2d(-1, 4.3);
    glVertex2d(-2.2, 5.2);
    glVertex2d(-2, 5.5);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.6, -3.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.3, 0);
    glVertex2d(0.3, 1);
    glVertex2d(0, 1);
    glEnd();
    glPopMatrix();
   
    
    glPushMatrix();
    glTranslated(0.2, -3.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.3, 0);
    glVertex2d(0.3, 1);
    glVertex2d(0, 1);
    glEnd();
    glPopMatrix();
 
    
    
}
void people1(){
    //head
    glPushMatrix();
    glTranslated(-0.2, -0.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.3, 0);
    glVertex2d(0.3, 0.3);
    glVertex2d(0, 0.3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
   head(0.6, 0.6);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.3, 0.1, 0);
   circle(0.2, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.3, 0.1, 0);
   circle(0.2, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -0.3, 0);
   circle(0.2, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -0.1, 0);
   circle(0.02, 0.08);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.7, -2.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0.6);
    glVertex2d(1.3, 0.6);
    glVertex2d(1.3, 2);
    glVertex2d(0, 2);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.7, -3, 0);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(-0.8, 0);
    glVertex2d(0, 0.8);
    glVertex2d(1.3, 0.8);
    glVertex2d(0.5, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-2.7 ,-6.3, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(2, 5.5);
    glVertex2d(2.2, 5.2);
   glVertex2d(1.3, 4.4);
    glVertex2d(1, 4.4);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(2.6 ,-6.3, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(-1, 4.4);
    glVertex2d(-1.2, 4.4);
    glVertex2d(-2.2, 5.2);
    glVertex2d(-2, 5.5);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.3, -3.8, 0);
    glColor3b(1, 1, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0);
    glVertex2d(0.2, 0.8);
    glVertex2d(0, 0.8);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.6, -3.8, 0);
    glColor3b(3, 5, 2);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0);
    glVertex2d(0.2, 0.8);
    glVertex2d(0, 0.8);
    glEnd();
    glPopMatrix();
    
}

void bench()
{
    glPushMatrix();
    //glColor3ub(255,255,225);
    glColor3ub(170,170,170);
    glPushMatrix();
    glTranslated(1.8,3,1);
    glBegin(GL_POLYGON);
    glVertex2d(-0.6,0);
    glVertex2d(-0.3,1);
    glVertex2d(7.6,1);
    glVertex2d(7.3,0);
    glEnd();
    glPopMatrix();
    
    //left leg
    glPushMatrix();
    glTranslated(3,1.7,1);
    glColor3f(0.42,0.25,0.0745);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(0,1.3);
    glVertex2d(0.4,1.3);
    glVertex2d(0.4,0);
    glEnd();
    glPopMatrix();
    
    //left leg
    glPushMatrix();
    glTranslated(2.4,1.7,1);
    glColor3f(0.42,0.25,0.0745);
    glBegin(GL_POLYGON);
    glVertex2d(0,-0.7);
    glVertex2d(0,1.3);
    glVertex2d(0.4,1.3);
    glVertex2d(0.4,-0.7);
    glEnd();
    glPopMatrix();
    
    //right leg
    glPushMatrix();
    glTranslated(7,1.7,0);
    glColor3f(0.42,0.25,0.0745);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(0,1.3);
    glVertex2d(0.4,1.3);
    glVertex2d(0.4,0);
    glEnd();
    glPopMatrix();
    
    //right leg
    glPushMatrix();
    glTranslated(7.6,1.7,0);
    glColor3f(0.42,0.25,0.0745);
    glBegin(GL_POLYGON);
    glVertex2d(0,-0.7);
    glVertex2d(0.0,1.3);
    glVertex2d(0.4,1.3);
    glVertex2d(0.4,-0.7);
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
}

void footballField(){
     
    
    glPushMatrix();
    glColor3f(0.5, 1, 0.5 );
        glBegin(GL_POLYGON);
         glVertex2d(4.5, -1.3);
         glVertex2d(-4.1, -1.3);
         glVertex2d(-4.1, 1.2);
         glVertex2d(4, 1.2);

    glEnd();
    glPopMatrix();
    
    /*glPushMatrix();
    glColor3f(0, 0, 0 );
        glBegin(GL_LINE_LOOP);
         glVertex2d(3.8, -1);
         glVertex2d(-3.6, -1);
         glVertex2d(-3.4, 1);
         glVertex2d(3.6, 1);

    glEnd();
    glPopMatrix();*/
    
    glPushMatrix();
    glTranslated(0, -0.022, 0);
    circle3(0.7, 1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, 0, 0);
    glColor3f(0,0, 0);
    glBegin(GL_LINES);
    glVertex2d(0, 1);
    glVertex2d(0, -1);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
        circle(0.1, 0.1);
        glPopMatrix();
    
   
    
    glPushMatrix();
    glTranslated(-1.4, 0, 0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2d(5.4,0.5);
     glVertex2d(5,0.5);
      glVertex2d(5,-0.5);
       glVertex2d(5.4,-0.5);
    glVertex2d(5.4,0.5);
     glVertex2d(5.4,-0.5);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-9, 0, 0);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2d(5.4,0.5);
     glVertex2d(5,0.5);
      glVertex2d(5,-0.5);
       glVertex2d(5.4,-0.5);
    glVertex2d(5,0.5);
     glVertex2d(5,-0.5);
    
    glEnd();
    glPopMatrix();
    
}


void bouddary(){
    //s1
    glPushMatrix();
    glTranslated(0, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.06, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    //s2
    glPushMatrix();
    glTranslated(-1.5, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.55, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    //s3
    glPushMatrix();
    glTranslated(-2.5, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-2.55, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    //s3
    glPushMatrix();
    glTranslated(-3.5, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-3.55, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    //s4
    glPushMatrix();
    glTranslated(-4.5, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-4.55, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    
    //s5
    glPushMatrix();
    glTranslated(-5.5, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-5.55, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-6.5, 0, 0);
    glColor3f(0.8, 1.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.25, 0);
    glVertex2d(0.25, 3);
    glVertex2d(0, 3);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-6.55, 2.9, 0);
    glColor3d(1.3, 0.7, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.2, 0.3);
    glVertex2d(0.4, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-7, 2, 0);
    glColor3f(0.45,0.25,0.0745);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(8, 0);
    glVertex2d(8, 0.2);
    glVertex2d(0, 0.2);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-7, 1, 0);
    glColor3f(0.42,0.25,0.0745);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(8, 0);
    glVertex2d(8, 0.2);
    glVertex2d(0, 0.2);
    glEnd();
    glPopMatrix();
    
    
    
    
    
}
void circle6(float r1, float r2)
{
    float angle=0.0;
    float x,y;
    int i;
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle=(360*i)/500;
        x=r1*cos(angle);
        y=r2*sin(angle);
        glVertex2d(x,y);
    }
    glEnd();

}
void cloud(){
    
    glPushMatrix();
    glTranslated(move_cloud, 0, 0);
    glTranslated(0.3, 2.9, 0);
    glBegin(GL_POLYGON);
    circle6(1,1);
    glEnd();
    
    glTranslated(0.8, 1.3, 0);
    glBegin(GL_POLYGON);
    circle6(1,1);
    glEnd();
    
    glTranslated(-1.3, 0.8, 0);
    glBegin(GL_POLYGON);
    circle6(1,1);
    glEnd();
    
    glTranslated(-1.2, -0.2, 0);
    glBegin(GL_POLYGON);
    circle6(1,1);
    glEnd();
    
    glTranslated(0, -1.4, 0);
    glBegin(GL_POLYGON);
    circle6(1,1);
    glEnd();
    
    glTranslated(0.6, 0.4, 0);
    glBegin(GL_POLYGON);
    //glTranslated(0, -2, 0);
   circle6(1,1);
    glEnd();
    
    glTranslated(2.5, -0.5, 0);
    glBegin(GL_POLYGON);
    //glTranslated(0, -2, 0);
    circle6(1,1);
    glEnd();
    //glPushMatrix();
    //sky();
    glPopMatrix();
   
    
}


void field()
{
    glPushMatrix();
    glColor3f(0,0.807f,0);
    glTranslated(0,3,1);
    glBegin(GL_QUADS);
    glVertex2d(-15,3);
    glVertex2d(15,3);
    glVertex2d(15,-3);
    glVertex2d(-15,-3);
    glEnd();
    glPopMatrix();

}

void oval(float r1,float r2){
    int i = 0;
    float angle = 0.0;
    glColor3f(0.6, 16, -0.6);
    glBegin(GL_POLYGON);
        for (i=0; i<=400; i++)
        {
            angle = (360 * i)/400;
            glVertex2d(r1*cos(angle),r2*sin (angle));
        }

    glEnd();
}
void house5(){
    
    glPushMatrix();
    glTranslated(9, 5.7, 0);
    glColor3f(0.3, 1.5, 0.7);
    glBegin(GL_POLYGON);
    //glColor3b(2, 2, 3);
    glVertex2d(0.5,1.6);
    glVertex2d(0.5, -2);
    glVertex2d(-0.5, -2);
    glVertex2d(-0.5, 1.6);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(9.6, 5.7, 0);
    glColor3f(1.2, 2, 0.4);
    //glColor3f(5, 2.6, 0.2);
    glBegin(GL_POLYGON);
    glVertex2d(0.1,1.3);
    glVertex2d(0.1, -1.8);
    glVertex2d(-0.1, -2);
    glVertex2d(-0.1, 1.6);
    glEnd();
    glPopMatrix();
    
    //w1
    glPushMatrix();
    glTranslated(8.6, 6.8, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w2
    glPushMatrix();
    glTranslated(8.6, 6.3, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w3
    glPushMatrix();
    glTranslated(8.6, 5.88, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    //w4
    glPushMatrix();
    glTranslated(8.6, 5.4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w5
    glPushMatrix();
    glTranslated(8.6, 5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w6
    glPushMatrix();
    glTranslated(8.6, 4.5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w7
    glPushMatrix();
    glTranslated(8.6, 4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w1
    glPushMatrix();
    glTranslated(9, 6.8, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w2
    glPushMatrix();
    glTranslated(9, 6.3, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w3
    glPushMatrix();
    glTranslated(9, 5.88, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    //w4
    glPushMatrix();
    glTranslated(9, 5.4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w5
    glPushMatrix();
    glTranslated(9, 5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w6
    glPushMatrix();
    glTranslated(9, 4.5, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w7
    glPushMatrix();
    glTranslated(9, 4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
     //road
    glPushMatrix();
    glTranslated(9, 0.66, 0);
    glColor3f(0.35, 0.35, 0.35);
    glBegin(GL_POLYGON);
    glVertex2d(1, 0);
    glVertex2d(-0.5, 3.1);
    glVertex2d(0.5, 3.1);
    glVertex2d(0.5, 0);
    glEnd();
    glPopMatrix();
    
    
}
    void house3(){
    //house of 3
    glPushMatrix();
    glTranslated(7.8, 5, 0);
    glColor3f(0.5, 2.4, 1.2);
    glBegin(GL_POLYGON);
    //glColor3b(2, 2, 3);
    glVertex2d(0.5,1.6);
    glVertex2d(0.5, -2);
    glVertex2d(-0.5, -2);
    glVertex2d(-0.5, 1.6);
    glEnd();
    glPopMatrix();
    
        glPushMatrix();
        glTranslated(7.3, 2.9, 0);
        //glColor3f(1.4, 0.6, 0.9);
        glBegin(GL_POLYGON);
        glColor3b(2, 2, 3);
        glVertex2d(0,0);
        glVertex2d(1.1, 0);
        glVertex2d(1,0.2);
        glVertex2d(0, 0.2);
        glEnd();
        glPopMatrix();
        
    //door hous of 3
    glPushMatrix();
     glTranslated(7.6, 3, 0);
     glColor3d(0, 0, 0);
     glBegin(GL_POLYGON);
     glVertex2d(0, 1);
     glVertex2d(0.4, 1);
     glVertex2d(0.4, 0);
     glVertex2d(0, 0);
     glEnd();
     glPopMatrix();
    
    //tringle
    glPushMatrix();
    glTranslated(7.3, 6.6, 0);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(1, 0);
    glVertex2d(0.5, 1);
    glEnd();
    glPopMatrix();
        
        glPushMatrix();
        glTranslated(7.4, -0.78, 0);
        glColor3f(0.35, 0.35, 0.35);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0.7, 0);
        glVertex2d(0.7, 3.67);
        glVertex2d(0, 3.67);
        glEnd();
        glPopMatrix();
        
        glPushMatrix();
        glTranslated(7.8, -0.69, 0);
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        //glVertex2d(2, 2);
        glVertex2d(0, 0);
        glVertex2d(0, 3.6);
        //glVertex2d(0.7, 3.67);
        glEnd();
        glPopMatrix();
        
        //w1
        glPushMatrix();
        glTranslated(7.4,6.3, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0.9, 0);
        glVertex2d(0.9, 0.2);
        glVertex2d(0, 0.2);
        glEnd();
        glPopMatrix();
        
        //w2
        glPushMatrix();
        glTranslated(7.4, 6, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0.9, 0);
        glVertex2d(0.9, 0.2);
        glVertex2d(0, 0.2);
        glEnd();
        glPopMatrix();
        
        //w3
        glPushMatrix();
        glTranslated(7.9, 5.6, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0, 0.3);
        glVertex2d(0.3, 0.3);
        glVertex2d(0.3, 0);
        glEnd();
        glPopMatrix();
        
        
        //w4
        glPushMatrix();
        glTranslated(7.9, 5, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0, 0.3);
        glVertex2d(0.3, 0.3);
        glVertex2d(0.3, 0);
        glEnd();
        glPopMatrix();
        
        //w5
        glPushMatrix();
        glTranslated(7.9, 4.5, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0, 0.3);
        glVertex2d(0.3, 0.3);
        glVertex2d(0.3, 0);
        glEnd();
        glPopMatrix();
        
        glPushMatrix();
        glTranslated(7.4, 5, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0, 0.3);
        glVertex2d(0.3, 0.3);
        glVertex2d(0.3, 0);
        glEnd();
        glPopMatrix();
        
        //w6
        glPushMatrix();
        glTranslated(7.4, 4.5, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0, 0.3);
        glVertex2d(0.3, 0.3);
        glVertex2d(0.3, 0);
        glEnd();
        glPopMatrix();
        
        //w7
        glPushMatrix();
        glTranslated(7.4, 5, 0);
        glColor3b(1, 3, 1);
        glBegin(GL_POLYGON);
        glVertex2d(0, 0);
        glVertex2d(0, 0.3);
        glVertex2d(0.3, 0.3);
        glVertex2d(0.3, 0);
        glEnd();
        glPopMatrix();
        
        
    
}

void tree(){
    sky();
    field();
    glPushMatrix();
    glTranslated(1, 0.82, 0);
    soil();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(2.2, 0.8, 0);
    glScaled(0.3, 0.3, 0);
    bench();
    glPopMatrix();
    
    
    glPushMatrix();
        glTranslated(-3.3,0.6, 0);
    glScaled(1.4, 0.8, 0);
        house3();
        glPopMatrix();

    //glPushMatrix();
    glTranslated(5, 2.5, 0);
    glColor3f(0.55,0.27,0.0745);
    glBegin(GL_POLYGON);
    
    glVertex2d(0.3,2.1);
    glVertex2d(0.3, -2.1);
    glVertex2d(-0.3, -2.1);
    glVertex2d(-0.3, 2.1);

    glEnd();
    //glPopMatrix();
    
    
    glTranslated(0.3, 2.9, 0);
    glBegin(GL_POLYGON);
    //glTranslated(1, 2.1, 0);
    oval(1,1);
    glEnd();
    
    glTranslated(0.8, 1.3, 0);
    glBegin(GL_POLYGON);
   // glTranslated(2, 1, 0);
    oval(1,1);
    glEnd();
    
    glTranslated(-1.3, 0.8, 0);
    glBegin(GL_POLYGON);
    //glTranslated(2, 1, 0);
    oval(1,1);
    glEnd();
    
    glTranslated(-1.2, -0.2, 0);
    glBegin(GL_POLYGON);
    //glTranslated(2, 1, 0);
    oval(1,1);
    glEnd();
    
    glTranslated(0, -1.4, 0);
    glBegin(GL_POLYGON);
    //glTranslated(0, -2, 0);
    oval(1,1);
    glEnd();
    
    glTranslated(0.6, 0.4, 0);
    glBegin(GL_POLYGON);
    //glTranslated(0, -2, 0);
    oval(1,1);
    glEnd();
    
    glTranslated(2.5, -0.5, 0);
    glBegin(GL_POLYGON);
    //glTranslated(0, -2, 0);
    oval(1,1);
    glEnd();
    glPushMatrix();
    glTranslated(-1.8, -5.5, 0);
    gress();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.3, -5.4, 0);
    gress();
    glPopMatrix();
    
    
}
void oval1(float r1, float r2)
{
    float angle=0.0;
    float x,y;
    int i;
    glColor3f(0,500,0);
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle=(360*i)/500;
        x=r1*cos(angle);
        y=r2*sin(angle);
        glVertex2d(x,y);
    }
    glEnd();

}
void tree1(){
    
    glPushMatrix();
    glTranslated(1, 0.82, 0);
    glPopMatrix();
    
    glTranslated(5, 2.5, 0);
    glColor3f(0.55,0.27,0.0745);
    glBegin(GL_POLYGON);
    
    glVertex2d(0.3,2.1);
    glVertex2d(0.3, -2.1);
    glVertex2d(-0.3, -2.1);
    glVertex2d(-0.3, 2.1);

    glEnd();
    
    glTranslated(0.3, 2.9, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
    
    glTranslated(0.8, 1.3, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
    
    glTranslated(-1.3, 0.8, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
    
    glTranslated(-1.2, -0.2, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
    
    glTranslated(0, -1.4, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
    
    glTranslated(0.6, 0.45, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
    
    glTranslated(2.5, -0.55, 0);
    glBegin(GL_POLYGON);
    oval1(1,1);
    glEnd();
   
    
}
void lines(){
    glColor3b(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2d(10, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0);
    glVertex2d(-10, 0);
    glEnd();

}


void sun()
{
    glPushMatrix();
    glTranslated(-4,8.5,0);
    glScaled(0.3,0.3,0);
    glColor3f(1,0.843,0);
    circle(2.5,3.5);
    glPopMatrix();
}

void pathor(float z1,float z2){
    float angle=0.0;
    float x,y;
    int i;
    
    glBegin(GL_POLYGON);
    for(i=0; i<500; i++)
    {
        angle=(360*i)/500;
        x=z1*cos(angle);
        y=z2*sin(angle);
        glVertex2d(x,y);
    }
    glEnd();
}
void house4(){
    glBegin(GL_POLYGON);
    glColor3d(0.43, 0.3, 0.24);
    glVertex2d(3.3, 0);
    glColor3d(0.6, 0.45, 0.7);
    glVertex2d(0, 0);
    glColor3d(0.6, 0, 0.11);
    glVertex2d(0, 4.8);
    glColor3d(0.46, 0.2, 0.19);
    glVertex2d(3.3, 4.8);
    glEnd();

    glPushMatrix();
    glTranslated(3.3,2.5,0);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2d(0.44, 1.6);
    glVertex2d(0.44,- 2.5);
    glVertex2d(0, -2.5);
    glVertex2d(0, 2.3);
    glEnd();
    glPopMatrix();

    //line
    glPushMatrix();
    glTranslated(0, 2.2, 0);
    glColor3b(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 2.5);
    glVertex2d(3.3, 2.5);
    glVertex2d(3.3, 2.6);
    glVertex2d(0, 2.6);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glColor3b(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 2.5);
    glVertex2d(3.3, 2.5);
    glVertex2d(3.3, 2.6);
    glVertex2d(0, 2.6);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.3, 3.3, 0);
    glColor3d(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(1.1, -0.2);
    glVertex2d(0, -0.2);
    glVertex2d(0, 1.1);
    glVertex2d(1.1, 1.1);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.3, 3.2, 0);
    glColor3f(0.50,0.50,0.50);
        glBegin(GL_LINES);
        glVertex2d(1.1, 0);
        glVertex2d(1.1, 1.2);
        glEnd();
    glPopMatrix();

    //wind2
    glPushMatrix();
    glTranslated(1.9, 3.37, 0);
    glColor3d(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(1.1, -0.2);
    glVertex2d(0, -0.2);
    glVertex2d(0, 1.1);
    glVertex2d(1.1, 1.1);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(1.3, 3.2, 0);
    glColor3f(0.50,0.50,0.50);
        glBegin(GL_LINES);
        glVertex2d(1.1, 0);
        glVertex2d(1.1, 1.2);
        glEnd();
    glPopMatrix();

   //win3
    glPushMatrix();
    glTranslated(0.4, 1, 0);
    glColor3d(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(1.1, -0.2);
    glVertex2d(0, -0.2);
    glVertex2d(0, 1.1);
    glVertex2d(1.1, 1.1);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.1, 0.9, 0);
    glColor3f(0.50,0.50,0.50);
        glBegin(GL_LINES);
        glVertex2d(1.1, 0);
        glVertex2d(1.1, 1.2);
        glEnd();
    glPopMatrix();

    //door
   glPushMatrix();
    glTranslated(1.7, 0, 0);
    glColor3d(0.21f, 0.17, 0.21);
    glBegin(GL_POLYGON);
    glVertex2d(0, 2);
    glVertex2d(1.1, 2);
    glVertex2d(1.1, 0);
    glVertex2d(0, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.9, -0.18, 0);
    glColor3f(0.50, 0.50, 0.50);
    pathor(0.4, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(1.81, -0.4, 0);
    glColor3f(0.55, 0.55, 0.55);
    pathor(0.4, 0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(2.1, -0.6, 0);
    glColor3f(0.55, 0.55, 0.55);
    pathor(0.4, 0.1);
    glPopMatrix();
    

    glPushMatrix();
    glTranslated(-4, -0.1, 0);
    glColor3d(0.3, 0, 0.3);
    glBegin(GL_POLYGON);
    glVertex2d(1.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.5);
    glVertex2d(1.8, 0.5);
    glEnd();
    glPopMatrix();
    
    
}
void house(){

    //glColor3d(0.6, 0, 0);
    //house
    glBegin(GL_POLYGON);
    glColor3d(0.6, 0, 0);
    glVertex2d(5, 0);
    glColor3d(0.6, 0, 0);
    glVertex2d(0, 0);
    glColor3d(0.6, 0, 0);
    glVertex2d(0, 5);
    glColor3d(0.6, 0, 0);
    glVertex2d(5, 5);
    glEnd();

    glPushMatrix();
    glTranslated(5.3,2.5,0);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2d(0.3, 2);
    glVertex2d(0.3,- 2.5);
    glVertex2d(-0.3, -2.5);
    glVertex2d(-0.3, 2.5);
    glEnd();
    glPopMatrix();

    //line
    glColor3b(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 2.5);
    glVertex2d(5, 2.5);
    glVertex2d(5, 2.6);
    glVertex2d(0, 2.6);
    glEnd();

    //wind1
    //glPushMatrix();
    glTranslated(3.7, 4, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.8);
    glVertex2d(0.8, 0.8);
    //glPopMatrix();
    glEnd();

    //wind2
    //glPushMatrix();
    glTranslated(-3.4, -0.1, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.8);
    glVertex2d(0.8, 0.8);
    glEnd();
    //glPopMatrix();

    //win5
    glTranslated(1.8, 0, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.8);
    glVertex2d(0.8, 0.8);
    glEnd();

    //windo4
   // glPushMatrix();
    glTranslated(-1.8, -2.4, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.8);
    glVertex2d(0.8, 0.8);
   // glPopMatrix();
    glEnd();

    glTranslated(3.4, -0.1, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.8);
    glVertex2d(0.8, 0.8);
    glEnd();


    glTranslated(-1.8, 0, 0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0.8, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.8);
    glVertex2d(0.8, 0.8);
    glEnd();
    
    glTranslated(-2,-1.8,0);
    glColor3d(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(5.6, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.6);
    glVertex2d(5.9, 0.6);
    glEnd();
    
}

void house2(){
    glPushMatrix();
    glTranslated(-7, 5.5, 0);
    glColor3f(0.111, 0.283, 0.114);
    glBegin(GL_POLYGON);
    glVertex2d(0.9,2.2);
    glVertex2d(0.9, -2.2);
    glVertex2d(-0.9, -2.2);
    glVertex2d(-0.9, 2.2);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-5.9, 5.5, 0);
    glColor3f(0.334,0.333,0.333);
    glBegin(GL_POLYGON);
    glVertex2d(0.2,2);
    glVertex2d(0.2, -2.2);
    glVertex2d(-0.2, -2.2);
    glVertex2d(-0.2, 2.2);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-5, 4.7, 0);
    glColor3f(0.5, 0.3, 1.3);
    glBegin(GL_POLYGON);
   // glColor3f(0.03, 0, 1.324);
    glVertex2d(0.8,2.2);
    //glColor3f(0.03, 1.5, 1.324);
    glVertex2d(0.8, -2);
    
    glVertex2d(-0.5, -2);
    //glColor3f(1.03, 1.5, 0);
    glVertex2d(-0.5, 2.2);
    glEnd();
    glPopMatrix();
    
    //w1
    glPushMatrix();
    glTranslated(-5.2, 6.4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w2
    glPushMatrix();
    glTranslated(-4.8, 6.4, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
  //w3
    glPushMatrix();
    glTranslated(-4.8, 5.8, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    //w4
    glPushMatrix();
    glTranslated(-5.2, 5.8, 0);
    glColor3b(1, 3, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 0.3);
    glVertex2d(0.3, 0.3);
    glVertex2d(0.3, 0);
    glEnd();
    glPopMatrix();
    
    
    
    
    
}

void line(void)
{
    glColor3d(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(0,2);
    glVertex2d(0,0);
    glVertex2d(2,0);
    glVertex2d(0,0);
    glVertex2d(-2,0);
     glVertex2d(0,0);
    glVertex2d(0,-2);
    glVertex2d(0,0);


    glEnd();
}

void car2(){
    glTranslated(move_right_car_1,0,0);
    glScaled(0.70,0.70,1);
    glColor3d(0,0,0);
    glBegin(GL_POLYGON);


    glVertex2d(2,2);
    glVertex2d(3,2);
    glVertex2d(3,0);
    glVertex2d(-3,0);
    glVertex2d(-3,2);
    glVertex2d(-2,2);
    glVertex2d(-2,3);
    glVertex2d(2,3);
    glEnd();
    
    glPushMatrix();
    glTranslated(0.1, 1.2, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0.9, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.9);
    glVertex2d(0.9, 0.9);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.4, 1.2, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0.9, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.9);
    glVertex2d(0.9, 0.9);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(1.5,0,0);
    glRotated(angle, 0, 0, -1);
     glScaled(0.30,0.30,1);
    glBegin(GL_POLYGON);
    circle(2,2);
    line();
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.5,0,0);
     glRotated(angle, 0, 0, -1);
     glScaled(0.30,0.30,1);
    glBegin(GL_POLYGON);
    circle(2,2);
    line();
    glEnd();
    glPopMatrix();
    
    
}

void car3(){
    
    glTranslated(move_left_car,0,0);
    glScaled(0.70,0.70,1);
    glColor3d(0.57, 0.5, 1.41);
    
    glBegin(GL_POLYGON);
    glVertex2d(2,2);
    glVertex2d(3,2);
    glVertex2d(3,0);
    glVertex2d(-3,0);
    glVertex2d(-3,2);
    glVertex2d(-2,2);
    glVertex2d(-2,3);
    glVertex2d(2,3);
    glEnd();
    
    glPushMatrix();
    glTranslated(-1.7, 1.2, 0);
   
    glColor3f(1, 0.5, 0.41);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0.4, 1);
    glVertex2d(1.4, 1);
    glVertex2d(1.4, 0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0.1, 1.2, 0);
    glColor3f(1, 0.5, 0.41);
    glBegin(GL_POLYGON);
    glVertex2d(1.1, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.9);
    glVertex2d(1.1, 0.9);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(1.5,0,0);
    glRotated(angle, 0, 0, -1);
     glScaled(0.30,0.30,1);
    glBegin(GL_POLYGON);
    circle1(2,2);
    line();
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.5,0,0);
     glRotated(angle1, 0, 0, -1);
     glScaled(0.30,0.30,1);
    glBegin(GL_POLYGON);
    circle1(2,2);
    line();
    glEnd();
    glPopMatrix();
    
    
}

void car4(){
    glTranslated(move_left_car_1,0,0);
    glScaled(0.70,0.70,1);
    glColor3f(255,0,0);
    glBegin(GL_POLYGON);


    glVertex2d(2,2);
    glVertex2d(3,2);
    glVertex2d(3,0);
    glVertex2d(-3,0);
    glVertex2d(-3,2);
    glVertex2d(-2,2);
    glVertex2d(-2,3);
    glVertex2d(2,3);
    glEnd();
    
    glPushMatrix();
    glTranslated(0.1, 1.2, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0.9, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.9);
    glVertex2d(0.9, 0.9);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.4, 1.2, 0);
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2d(0.9, 0);
    glVertex2d(0, 0);
    glVertex2d(0, 0.9);
    glVertex2d(0.9, 0.9);
    glEnd();
    glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(1.5,0,0);
    glRotated(angle1, 0, 0, -1);
     glScaled(0.30,0.30,1);
    glBegin(GL_POLYGON);
    circle1(2,2);
    line();
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-1.5,0,0);
     glRotated(angle1, 0, 0, -1);
     glScaled(0.30,0.30,1);
    glBegin(GL_POLYGON);
    circle1(2,2);
    line();
    glEnd();
    glPopMatrix();
    
    
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix();
    glTranslated(0,0.4,0);
    road();
    glPopMatrix();
    
    
    glPushMatrix();
    tree();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-9.8, 5.4, 0);
    glScaled(0.2, 0.2, 0);
    tree1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-10.5, 5, 0);
    glScaled(0.2, 0.2, 0);
    tree1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-5.2, 4.8, 0);
    glScaled(0.4, 0.3, 0);
    tree1();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-2.4,0,0);
    glScaled(0.7, 1, 0);
        house2();
        glPopMatrix();
    
    
    glPushMatrix();
    glTranslated(-9.1, 0.5, 0);
    glScaled(0.8, 1, 0);
    house();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-3.8, 0.8, 0);
    house4();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-0.8, -0.7, 0);
    glScaled(1.1, 1.1, 0);
    house5();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.5, 2.2, 0);
    glScaled(0.5, 0.56, 0);
    people();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(3.9, 3.2, 0);
    glScaled(0.5, 0.5, 0);
    people1();
    glPopMatrix();
    
glPushMatrix();
glTranslated(move_right_car,0,0);
glScaled(0.70,0.70,1);

        car_body();

    glPushMatrix();
        glTranslated(1.5,0,0);
        glRotated(angle, 0, 0, -1);
         glScaled(0.30,0.30,1);
        circle(2,2);
        line();
    glPopMatrix();
    glPushMatrix();
        glTranslated(-1.5,0,0);
         glRotated(angle, 0, 0, -1);
         glScaled(0.30,0.30,1);
        circle(2,2);
         line();

    glPopMatrix();

glPopMatrix();

    sun();
    glPushMatrix();
    glTranslated(-5, -0.7, 0);
    car2();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0, -7.4, 0);
    field();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(0,-1.9,0);
    road();
    glPopMatrix();
    
    
    
    glPushMatrix();
    glTranslated(0, -8, 0);
   
    soil();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-6.3, -0.57, 0);
    glScaled(1, 0.8, 0);
    lampPost();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.6, -0.57, 0);
    glScaled(1, 0.8, 0);
    lampPost();
    glPopMatrix();
    glPushMatrix();
    glTranslated(6.6, -0.57, 0);
    glScaled(1, 0.8, 0);
    lampPost();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(4, -2.2, 0);
    car3();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-7, -2.7, 0);
    car4();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-2.6, -5, 0);
    bouddary();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-5.9, -6, 0);
    footballField();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-10.6, -9.7, 0);
    glScaled(0.9, 0.56, 0);
    bench();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 7.9, 0);
    glScaled(0.41, 0.35, 0);
    cloud();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(13, 7.7, 0);
    glScaled(0.41, 0.35, 0);
    cloud();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-5, 7.7, 0);
    glScaled(0.41, 0.35, 0);
    cloud();
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(-17.6, 7.7, 0);
    glScaled(0.31, 0.40, 0);
    cloud();
    glPopMatrix();
    
    glFlush();
    

}

//car movement code er idea online theke nia kora hoase...

void update_left_car(int value)
{
    //car eka move korbe
    angle1 = angle1 - 0.5;
    move_left_car -= 0.2;
   if(move_left_car<-14)
   {
   move_left_car = 18;
   }
   glutPostRedisplay();
    
glutTimerFunc(5, update_left_car, 0);
}


void update_right_car(int value)
{
    //car eka move korbe
    angle = angle + 0.5;
    move_right_car += 0.09;
   if(move_right_car>14)
   {
   move_right_car = -15;
   }
   glutPostRedisplay();
    
glutTimerFunc(5, update_right_car, 0);
}


void update_left_car_1(int value)
{
    //car eka move korbe
    angle1 = angle1 - 0.5;
    move_left_car_1 -= 0.2;
   if(move_left_car_1<-14)
   {
   move_left_car_1 = 18;
   }
   glutPostRedisplay();
    
glutTimerFunc(5, update_left_car_1, 0);
}


void update_right_car_1(int value)
{
    //car eka move korbe
    angle = angle + 0.5;
    move_right_car_1 += 0.19;
   if(move_right_car_1>14)
   {
   move_right_car_1 = -15;
   }
   glutPostRedisplay();
glutTimerFunc(5, update_right_car_1, 0);
}


void cloudmove(int value)
{
    //car eka move korbe
    angle = angle + 0.5;
    move_cloud += 0.3;
   if(move_cloud>45)
   {
   move_cloud = -45;
   }
   glutPostRedisplay();
    glutTimerFunc(5, cloudmove, 0);
}

int main(int argc,char** argv)
{
    int width = glutGet(GLUT_SCREEN_WIDTH);
    int height = glutGet(GLUT_SCREEN_HEIGHT);
    
    glutInit(&argc, argv);
    glutInitWindowSize(width,height);
   // glutInitWindowSize(800,800);
    glutInitWindowPosition(50,-20);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("GLUT Shapes");
    init();

   
    glutDisplayFunc(myDisplay);
    glutTimerFunc(5, update_left_car, 0);
    glutTimerFunc(5, update_left_car_1, 0);
    glutTimerFunc(5, update_right_car, 0);
    glutTimerFunc(5, update_right_car_1, 0);
    glutTimerFunc(5, cloudmove, 0);
    glutMainLoop();

    return 0;
}

