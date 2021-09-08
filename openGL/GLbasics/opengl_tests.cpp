//
// Created by benacq on 08/09/2021.
//


#include <GL/glut.h>
#include <cmath>

float x_position = -10.0;
int state = 1;

void reshape(int w, int h);

void init();

void timer(int);

void animatedBox();

void animatedObject();

void triangle();

void quad();

void point();

void lineSegment();


int main(int argc, char **argv) {
    //INITIALIZE
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutInitWindowPosition(200, 100);
    glutInitWindowSize(500, 500);

    //CREATE WINDOW
    glutCreateWindow("Sample example yo!");
    init();

    //RENDER YOUR GRAPHICS
    glutDisplayFunc(animatedObject);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0);

    glutMainLoop();
    return 0;
}


void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
}


void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); //RESETS THE PROJECTION MATRIX
    gluOrtho2D(-10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);
//    std::cout << w << " " << h << std::endl;
}

//Animations
void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0); //60fps

    switch (state) {

        default:
        case 1:
            if (x_position < 9) {
                x_position += 0.15;
            } else {
                state = -1;
            }
            break;
        case -1:
            if (x_position > -9) {
                x_position -= 0.15;
            } else {
                state = 1;
            }

            break;
    }
}

void circle() {
    int num_vertices = 40;
    float radius = 0.95f;
    float two_pi = 2.0 * 3.1452423;

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= 40; i++) {
        glVertex2f(radius * cosf(i * two_pi / num_vertices), radius * sinf(i * two_pi / num_vertices));
    }
    glEnd();
}


void animatedObject() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(x_position, 0.0, 0.0);
    circle();
    //SWAP BUFFER IS CALLED FOR ANIMATION INSTEAD OF glFlush();
    glutSwapBuffers();
}


void animatedBox() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(x_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
    //PERFORM ANIMATION
    glVertex2f(-1.0, 1.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 1.0);
    glEnd();

    //SWAP BUFFER IS CALLED FOR ANIMATION INSTEAD OF glFlush();
    glutSwapBuffers();
}


void quad() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_QUADS);//GL_QUAD CAN ALSO BE REPLACED WITH GL_POLYGON
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 5.0);
    glVertex2f(5.0, 5.0);
    glVertex2f(5.0, 0.0);

    glEnd();
    glFlush();
}

void triangle() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 5.0);
    glVertex2f(4.0, -3.0);
    glVertex2f(-4.0, -3.0);

    glEnd();
    glFlush();
}

//POINT
void point() {
    glClear(GL_COLOR_BUFFER_BIT); //CLEARS THE FRAME BUFFER
    glLoadIdentity(); // RESETS ALL TRANSFORMATION MATRICES
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glVertex2f(5.0, 5.0);
    glVertex2f(-5.0, -5.0);
    glEnd();
    //DRAW
    glFlush(); //DISPLAY DRAWING ON SCREEN
}

// LINE
void lineSegment() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.4, 0.2);
    glBegin(GL_LINES);
    glVertex2i(180, 15);
    glVertex2i(10, 145);
    glEnd();
    glFlush();
}
