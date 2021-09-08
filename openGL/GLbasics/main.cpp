#include <GL/glut.h>
#include <cmath>

float x_position = -10.0;
int state = 1;

void init();

void reshape(int w, int h);

void timer(int);

void animatedObject();

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

