#include <GL/glut.h>
#include "vue/vue.c"

void display() {
    glClearColor(246.0f/255.0f, 247.0f/255.0f, 235.0f/255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // configurer projection pour coordonnées en pixels
    glMatrixMode(GL_PROJECTION);  // on modifie la projection
    glLoadIdentity();             // réinitialiser la matrice
    glOrtho(0, 1024, 0, 768, -1, 1); // zone visible
    glMatrixMode(GL_MODELVIEW);   // revenir à la matrice modèle/vue
    glLoadIdentity();             // réinitialiser modèle/vue
    
    // draw buttons
    drawButton(btnAdd, colorAdd);
    drawButton(btnDelete, colorDelete);
    drawButton(btnUpdate, colorUpdate);
    drawButton(btnList, colorList);

    glutSwapBuffers();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(1024, 768); // screen's ipad mini
    glutCreateWindow("Gestion Etudiants(OpenGL-C)");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}