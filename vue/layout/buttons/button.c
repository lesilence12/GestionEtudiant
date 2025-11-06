#include "button.h"
#include <GL/glut.h>

/* My Functions */
void drawButton(Button btn, ColorBtn color){
    glColor3f(color.red, color.green, color.blue);
    glBegin(GL_QUADS);
        glVertex2i(btn.x, btn.y);
        glVertex2i(btn.x + btn.width, btn.y);
        glVertex2i(btn.x + btn.width, btn.y + btn.height);
        glVertex2i(btn.x, btn.y + btn.height);
    glEnd();
}