#include <windows.h>
#include <GL/glut.h>


void initGL() {

    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
}


void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    // Draw 2D axes
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);


    glVertex2f(0.0f, 1.0f);    // for top y
    glVertex2f(0.0f, -1.0f);   // for bottom y axis


    glVertex2f(-1.0f, 0.0f);   // for left x
    glVertex2f(1.0f, 0.0f);    // for right x
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); //red

    glVertex2f(0.2f, 0.6f);   // First point
    glVertex2f(0.2f, 0.2f);   // Second point
    glVertex2f(0.75f, 0.2f);   // Third point
    glVertex2f(0.75f, 0.6f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //red
 glVertex2f(0.45f, 0.5f);     // First point
      glVertex2f(0.45f, 0.45f);   // Second point
    glVertex2f(0.5f, 0.45f) ; // Third point
    glVertex2f(0.5f, 0.5f);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //red

      glVertex2f(0.45f, 0.45f);
       glVertex2f(0.35f, 0.45f);    // Second point
      glVertex2f(0.35f, 0.4f); // Third point
      glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //red

      glVertex2f(0.45f, 0.4f);
      glVertex2f(0.45f, 0.35f);    // Second point
      glVertex2f(0.5f, 0.35f);
     glVertex2f(0.5f, 0.4f);
    glEnd();

        glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //red

      glVertex2f(0.5f, 0.4f);
      glVertex2f(0.6f, 0.4f);    // Second point
      glVertex2f(0.6f, 0.45f);
     glVertex2f(0.5f, 0.45f);
    glEnd();

          glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f); //red

     glVertex2f(0.45f, 0.45f);
      glVertex2f(0.45f, 0.4f);    // Second point
      glVertex2f(0.5f, 0.4f);
     glVertex2f(0.5f, 0.45f);
    glEnd();


//2nd one finland


    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //red

    glVertex2f(-0.8f, 0.6f);   // First point
    glVertex2f(-0.8f, 0.2f);   // Second point
    glVertex2f(-0.2f, 0.2f);   // Third point
    glVertex2f(-0.2f, 0.6f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.6f); //red
 glVertex2f(-0.65f, 0.6f);     // First point
      glVertex2f(-0.65f, 0.45f);   // Second point
    glVertex2f(-0.6f, 0.45f) ; // Third point
    glVertex2f(-0.6f, 0.6f);
    glEnd();

glBegin(GL_QUADS);
  glColor3f(0.0f, 0.0f, 0.6f); //red

      glVertex2f(-0.65f, 0.45f);
       glVertex2f(-0.8f, 0.45f);    // Second point
      glVertex2f(-0.8f, 0.4f); // Third point
      glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 0.6f); //red

      glVertex2f(-0.65f, 0.4f);
      glVertex2f(-0.65f, 0.2f);    // Second point
      glVertex2f(-0.6f, 0.2f);
     glVertex2f(-0.6f, 0.4f);
    glEnd();

        glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 0.6f);  //red

      glVertex2f(-0.6f, 0.4f);
      glVertex2f(-0.2f, 0.4f);    // Second point
      glVertex2f(-0.2f, 0.45f);
     glVertex2f(-0.6f, 0.45f);
    glEnd();

          glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.6f); //red

     glVertex2f(-0.65f, 0.45f);
      glVertex2f(-0.65f, 0.4f);    // Second point
      glVertex2f(-0.6f, 0.4f);
     glVertex2f(-0.6f, 0.45f);
    glEnd();


//3rd one scot land



    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.2f, 0.6f); //red

    glVertex2f(-0.8f, -0.2f);   // First point
    glVertex2f(-0.8f, -0.6f);   // Second point
    glVertex2f(-0.2f, -0.6f);   // Third point
    glVertex2f(-0.2f, -0.2f);
    glEnd();


    glBegin(GL_QUADS);
 glColor3f(1.0f, 1.0f, 1.6f);
  glVertex2f(-0.8f, -0.25f);     // First point
      glVertex2f(-0.55f, -0.4f);   // Second point
    glVertex2f(-0.5f, -0.35f) ; // Third point
    glVertex2f(-0.75f, -0.2f);
    glEnd();

glBegin(GL_QUADS);
 glColor3f(1.0f, 1.0f, 1.6f);
      glVertex2f(-0.55f, -0.4f);
       glVertex2f(-0.8f, -0.55f);    // Second point
      glVertex2f(-0.75f, -0.6f); // Third point
      glVertex2f(-0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
 glColor3f(1.0f, 1.0f, 1.6f);
     glVertex2f(-0.5f, -0.45f);
      glVertex2f(-0.25f, -0.6f);    // Second point
      glVertex2f(-0.2f, -0.55);
     glVertex2f(-0.45f, -0.4f);
    glEnd();

        glBegin(GL_QUADS);
 glColor3f(1.0f, 1.0f, 1.6f);
        glVertex2f(-0.45f, -0.4f);
      glVertex2f(-0.2f, -0.25f);    // Second point
      glVertex2f(-0.25f, -0.2f);
     glVertex2f(-0.5f, -0.35f);
    glEnd();

          glBegin(GL_QUADS);
 glColor3f(1.0f, 1.0f, 1.6f);
     glVertex2f(-0.5f, -0.35f);
      glVertex2f(-0.55f, -0.4f);    // Second point
      glVertex2f(-0.5f, -0.45f);
     glVertex2f(-0.45f, -0.4f);
    glEnd();

    //4 triangle

           glBegin(GL_TRIANGLES);
 glColor3f(1.0f, 1.0f, 1.6f);
     glVertex2f(-0.8f, -0.2f);
      glVertex2f(-0.8f, -0.25f);    // Second point
      glVertex2f(-0.75f, -0.2f);

    glEnd();


           glBegin(GL_TRIANGLES);
 glColor3f(1.0f, 1.0f, 1.6f);
     glVertex2f(-0.8f, -0.6f);
      glVertex2f(-0.75f, -0.6f);    // Second point
      glVertex2f(-0.8f, -0.55f);

    glEnd();


           glBegin(GL_TRIANGLES);
 glColor3f(1.0f, 1.0f, 1.6f);
     glVertex2f(-0.25f, -0.6f);
      glVertex2f(-0.2f, -0.6f);    // Second point
      glVertex2f(-0.2f, -0.55f);

    glEnd();


           glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.6f); //red

     glVertex2f(-0.2f, -0.25f);
      glVertex2f(-0.2f, -0.2f);    // Second point
      glVertex2f(-0.25f, -0.2f);

    glEnd();


    // VIAETNAM


       glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); //red

    glVertex2f(0.2f, -0.2f);   // First point
    glVertex2f(0.2f, -0.6f);   // Second point
    glVertex2f(0.8f, -0.6f);   // Third point
    glVertex2f(0.8f, -0.2f);
    glEnd();


 glColor3f(1.0f, 1.0f, 0.0f); // Cyan color
 glBegin(GL_TRIANGLES);
 glVertex2f(0.5, -0.25);
 glVertex2f(0.45, -0.35);
 glVertex2f(0.55, -0.35);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex2f(0.45, -0.35);
 glVertex2f(0.3, -0.35);
 glVertex2f(0.44, -0.42);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex2f(0.44, -0.42);
 glVertex2f(0.4, -0.55);
 glVertex2f(0.5, -0.48);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex2f(0.5, -0.48);//
 glVertex2f(0.6, -0.55);
 glVertex2f(0.56, -0.42);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex2f(0.56, -0.42);
 glVertex2f(0.7, -0.35);
 glVertex2f(0.55, -0.35);
 glEnd();

 glBegin(GL_POLYGON);
 glVertex2f(0.45, -0.35);
 glVertex2f(0.44, -0.42);
 glVertex2f(0.5, -0.48);
 glVertex2f(0.56, -0.42);
 glVertex2f(0.55, -0.35);
 glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);


    glutCreateWindow("Vertex, Primitive & Color");


    glutInitWindowSize(500, 500);

    glutInitWindowPosition(50, 50);


    glutDisplayFunc(display);


    initGL();


    glutMainLoop();

    return 0;
}
