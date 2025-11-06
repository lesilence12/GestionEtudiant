#include <GL/glut.h>
#include <stdio.h>
/* #include "src/bibliotheque/etudiant.h" */

/* int main(){

    Etudiant e1 = {"22S74153", "William", 'M', 21, 2, "INFO"};
    Etudiant e2 = {"23S74153", "Steve", 'M', 20, 1, "MATHS"};

    EnsEtudiant e = {e1, e2};

    list_Etudiant(e);
}
 */

void display() {
    glClearColor(246, 247, 235, 1);
    glClear(GL_COLOR_BUFFER_BIT);
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