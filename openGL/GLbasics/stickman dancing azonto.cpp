//#ifdef __APPLE__
//#include <GLUT\glut.h>
//#else
//#include <GL\glut.h>
//#endif
////Laryea Frandy Odai Index Number 1652717
//#include <stdlib.h>
//#include <math.h>
//#define pi 3.1415926
//float theta;
//double x = 0.0; double y=0.3;
////this give a refresh period for the program
//void Refresh_timer( int value )
//{
//    glutPostRedisplay();
//    glutTimerFunc( 700, Refresh_timer, 0);
// }
//
//
//
//
//void display(void)
//{
//
//            glClearColor (0.0f, 1.0f, 1.0f, 0.0f);
//            glClear (GL_COLOR_BUFFER_BIT);
//
//            glColor3f( 0.1, 0.0, 0.0);
//            if(x==0.0){
//                y=0.0;
//                x=0.3;
//            }else{
//                x=0.0;
//                y=0.3;
//            }
//
//    //the hands
//            glBegin(GL_LINES);
//                glVertex2f(-0.25 , 0.05 - x);
//                glVertex2f(-0.2, -0.1);
//            glEnd();
//
//            glBegin(GL_LINES);
//                glVertex2f(0.25 , 0.05 - y);
//                glVertex2f(0.2, -0.1);
//            glEnd();
//    //the code for the first rectangle
//            glBegin (GL_POLYGON);
//                for(int i=0; i<360; i++){
//                    theta = 2*pi*i/180;
//                    glVertex2f(0.0 + 0.1*cos(theta), 0.2 + 0.1*sin(theta));
//                }
//            glEnd ();
//    //the neck to butt
//            glBegin(GL_LINES);
//                glVertex2f(0.0, 0.1);
//                glVertex2f(0.0, -0.3);
//            glEnd();
//
//    //the arms
//            glBegin(GL_LINES);
//                glVertex2f(0.0, 0.0);
//                glVertex2f(-0.2, -0.1);
//            glEnd();
//
//            glBegin(GL_LINES);
//                glVertex2f(0.0, 0.0);
//                glVertex2f(0.2, -0.1);
//            glEnd();
//
//    //the thighs
//            glBegin(GL_LINES);
//                glVertex2f(0.0, -0.3);
//                glVertex2f(-0.2, -0.4);
//            glEnd();
//
//            glBegin(GL_LINES);
//                glVertex2f(0.0, -0.3);
//                glVertex2f(0.2, -0.4);
//            glEnd();
//
//    //the legs
//            glBegin(GL_LINES);
//                glVertex2f(-0.25 + (x/2), -0.55);
//                glVertex2f(-0.2, -0.4);
//            glEnd();
//
//            glBegin(GL_LINES);
//                glVertex2f(0.15 + (x/2), -0.55);
//                glVertex2f(0.2, -0.4);
//            glEnd();
//
//        glFlush();
//    glutSwapBuffers();
//}
//
//int main(int argc, char *argv[])
//{
//    glutInit(&argc, argv);
//    glutInitWindowSize(640,480);
//    glutInitWindowPosition(300, 300);
//    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
//    glutCreateWindow("Azonto Dance");
//    glutDisplayFunc(display);
//
//    glutTimerFunc(100, Refresh_timer, 0);
//    glutMainLoop();
//
//    return EXIT_SUCCESS;
//}



//#include <GL/glut.h>
//#include <iostream>
//#include <cstdio>
//// g++ main.cpp -o main -lglut -lGLU -lGL
////./main
//
//
//
//void reshape(int w, int h);
//
//void init();
//
//void timer(int);
//
//void animatedBox();
//
//void triangle();
//
//void quad();
//
//void point();
//
//void lineSegment();
//
//
//int main(int argc, char **argv) {
//    //INITIALIZE
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
//
//    glutInitWindowPosition(200, 100);
//    glutInitWindowSize(500, 500);
//
//    //CREATE WINDOW
//    glutCreateWindow("Sample example yo!");
//    init();
//
//    //RENDER YOUR GRAPHICS
//    glutDisplayFunc(animatedBox);
//    glutReshapeFunc(reshape);
//    glutTimerFunc(0, timer, 0);
//
//    glutMainLoop();
//    return 0;
//}
//
//
//void init() {
//    glClearColor(0.0, 0.0, 0.0, 1.0);
//}
//
//
//void reshape(int w, int h) {
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity(); //RESETS THE PROJECTION MATRIX
//    gluOrtho2D(-10, 10, -10, 10);
//    glMatrixMode(GL_MODELVIEW);
////    std::cout << w << " " << h << std::endl;
//}
//
////Animations
//float x_position = -10.0;
//int state = 1;
//
//
//void timer(int) {
//    glutPostRedisplay();
//    glutTimerFunc(1000 / 60, timer, 0); //60fps
//
//    switch (state) {
//
//        default:
//        case 1:
//            if (x_position < 9) {
//                x_position += 0.15;
//            } else {
//                state = -1;
//            }
//            break;
//        case -1:
//            if (x_position > -9) {
//                x_position -= 0.15;
//            } else {
//                state = 1;
//            }
//
//            break;
//    }
//}
//
//
//void animatedBox() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLoadIdentity();
//
//    glTranslatef(x_position, 0.0, 0.0);
//
//    glBegin(GL_POLYGON);
//    //PERFORM ANIMATION
//    glVertex2f(-1.0, 1.0);
//    glVertex2f(-1.0, -1.0);
//    glVertex2f(1.0, -1.0);
//    glVertex2f(1.0, 1.0);
//    glEnd();
//
//    //SWAP BUFFER IS CALLED FOR ANIMATION INSTEAD OF glFlush();
//    glutSwapBuffers();
//
//
//}
//
//
//void quad() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLoadIdentity();
//
//    glBegin(GL_QUADS);//GL_QUAD CAN ALSO BE REPLACED WITH GL_POLYGON
//    glVertex2f(0.0, 0.0);
//    glVertex2f(0.0, 5.0);
//    glVertex2f(5.0, 5.0);
//    glVertex2f(5.0, 0.0);
//
//    glEnd();
//    glFlush();
//}
//
//void triangle() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glLoadIdentity();
//
//    glBegin(GL_TRIANGLES);
//    glVertex2f(0.0, 5.0);
//    glVertex2f(4.0, -3.0);
//    glVertex2f(-4.0, -3.0);
//
//    glEnd();
//    glFlush();
//}
//
////POINT
//void point() {
//    glClear(GL_COLOR_BUFFER_BIT); //CLEARS THE FRAME BUFFER
//    glLoadIdentity(); // RESETS ALL TRANSFORMATION MATRICES
//    glPointSize(10.0);
//    glBegin(GL_POINTS);
//    glVertex2f(5.0, 5.0);
//    glVertex2f(-5.0, -5.0);
//    glEnd();
//    //DRAW
//    glFlush(); //DISPLAY DRAWING ON SCREEN
//}
//
//// LINE
//void lineSegment() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0, 0.4, 0.2);
//    glBegin(GL_LINES);
//    glVertex2i(180, 15);
//    glVertex2i(10, 145);
//    glEnd();
//    glFlush();
//}


#include <GL/glut.h>
#include <cstdlib>
//
//using namespace std;
//
//int refresh = 500;
//
//void timer(int) {
//    // Post re-paint request to activate display();
//    glutPostRedisplay();
//    // next timer call milliseconds later
//    glutTimerFunc(refresh, timer, 0);
//}
//
//float randColor() {
//    //background changing colors
//    float randColorNumber = (float) random() / (float) RAND_MAX;
//    return randColorNumber;
//}
//
//void display() {
//    glClearColor(randColor(), randColor(), randColor(), 0.0);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glFlush();
//}
//
//int main(int argc, char *argv[]) {
//    glutInit(&argc, argv);
//    glutCreateWindow("Background Changing Colors");
//    glutInitWindowSize(700, 500);
//    glutDisplayFunc(display);
//    glutTimerFunc(0, timer, 0);
//    glutMainLoop();
//
//    return 0;
//}

//
//#include <cmath>
//#define pi 3.1415926
//float theta;
//double x = 0.0;
//double y = 0.3;
//
////this give a refresh period for the program
//void Refresh_timer(int value) {
//    glutPostRedisplay();
//    glutTimerFunc(700, Refresh_timer, 0);
//}
//
//
//void display() {
//
//    glClearColor(0.0f, 1.0f, 1.0f, 0.0f);
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glColor3f(0.1, 0.0, 0.0);
//    if (x == 0.0) {
//        y = 0.0;
//        x = 0.3;
//    } else {
//        x = 0.0;
//        y = 0.3;
//    }
//
//    //the hands
//    glBegin(GL_LINES);
//    glVertex2f(-0.25, 0.05 - x);
//    glVertex2f(-0.2, -0.1);
//    glEnd();
//
//    glBegin(GL_LINES);
//    glVertex2f(0.25, 0.05 - y);
//    glVertex2f(0.2, -0.1);
//    glEnd();
//    //the code for the first rectangle
//    glBegin(GL_POLYGON);
//    for (int i = 0; i < 360; i++) {
//        theta = 2 * pi * i / 180;
//        glVertex2f(0.0 + 0.1 * cos(theta), 0.2 + 0.1 * sin(theta));
//    }
//    glEnd();
//    //the neck to butt
//    glBegin(GL_LINES);
//    glVertex2f(0.0, 0.1);
//    glVertex2f(0.0, -0.3);
//    glEnd();
//
//    //the arms
//    glBegin(GL_LINES);
//    glVertex2f(0.0, 0.0);
//    glVertex2f(-0.2, -0.1);
//    glEnd();
//
//    glBegin(GL_LINES);
//    glVertex2f(0.0, 0.0);
//    glVertex2f(0.2, -0.1);
//    glEnd();
//
//    //the thighs
//    glBegin(GL_LINES);
//    glVertex2f(0.0, -0.3);
//    glVertex2f(-0.2, -0.4);
//    glEnd();
//
//    glBegin(GL_LINES);
//    glVertex2f(0.0, -0.3);
//    glVertex2f(0.2, -0.4);
//    glEnd();
//
//    //the legs
//    glBegin(GL_LINES);
//    glVertex2f(-0.25 + (x / 2), -0.55);
//    glVertex2f(-0.2, -0.4);
//    glEnd();
//
//    glBegin(GL_LINES);
//    glVertex2f(0.15 + (x / 2), -0.55);
//    glVertex2f(0.2, -0.4);
//    glEnd();
//
//    glFlush();
//    glutSwapBuffers();
//}
//
//int main(int argc, char **argv) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitWindowPosition(300, 300);
//    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
//    glutCreateWindow("Azonto Dance");
//    glutDisplayFunc(display);
//
//    glutTimerFunc(100, Refresh_timer, 0);
//    glutMainLoop();
//
//    return EXIT_SUCCESS;
//}



//
//#include <cmath>
//
//#define PI 3.14159265
//
//using namespace std;
//
//
//GLint circle_points = 20;
//
//void MyCircle2f(GLfloat centerx, GLfloat centery, GLfloat radius) {
//    GLint i;
//    GLdouble angle;
//    glBegin(GL_POLYGON);
//    for (int i = 0; i < circle_points; i++) {
//
//        angle = 2 * PI * i / circle_points;
//        glVertex2f(centerx + radius * cos(angle),
//                   centery + radius * sin(angle));
//    }
//    glEnd();
//}
//
//int refreshMills = 10;
//double count = 0.1;
//int factor = 1;
//
//void Timer(int value) {
//    glutPostRedisplay(); // Post re-paint request to activate display();
//    glutTimerFunc(refreshMills, Timer, 0); // next Timer call milliseconds later
//}
//
//float randomColor() {
//    float randomColorNumber = static_cast<double> (rand()) / static_cast<double>(RAND_MAX);
//    return randomColorNumber;
//}
//
//
//void Display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    if (count < 0.0)
//        factor = 1;
//    else if (count > 157.0)
//        factor = -1;
//
//    glColor3f(1.0, 0.4, 0.1);
//    count = count + (factor * 1);
//
//    //cout << count << endl;
//    glPushMatrix();
//    glTranslatef(count, 10, 0.0);
//    glColor3f(randomColor(), randomColor(), randomColor());
//    MyCircle2f(0.0, 0.0, 15);
//    //glBegin(GL_POINTS);
//    // Color the first point
//    //glVertex2f(10.0, 10.0);
//    //glEnd();
//    glPopMatrix();
//    glFlush();
//}
//
//void init() {
//
//    // Perform some initialization before we begin to render.
//    glClearColor(0.0, 0.0, 0.0, 1.0);
//
//    glViewport(0, 0, 320, 240);
//
//    glPointSize(10);
//
//    gluOrtho2D(0.0, 160.0, 0.0, 120);
//}
//
//int main(int argc, char *argv[]) {
//    glutInit(&argc, argv);
//    // BUFFER MODE IS ONLY SINGLE or SINGLE BUFFER MODE.
//    // Colors will be defined in RGB Format.
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//    glutInitWindowSize(320, 240);
//    glutCreateWindow("Bouncing Ball");
//    init();
//    glutDisplayFunc(Display);
//    glutTimerFunc(0, Timer, 0);
//    glutMainLoop();
//
//    return 0;
//}