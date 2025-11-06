#include <stdio.h>
#include "../bibliotheque/etudiant.h"

void list_Etudiant(EnsEtudiant EnsTab){
    EnsTab.lenght = 2;
    for (int i = 0; i < EnsTab.lenght; i++){
        printf("Matricule : %s\n", EnsTab.tab[i].matricule);
        printf("Noms : %s\n", EnsTab.tab[i].name);
        printf("Genre : %c\n", EnsTab.tab[i].sexe);
        printf("Age : %d\n", EnsTab.tab[i].age);
        printf("Niveau : %d\n", EnsTab.tab[i].niveau);
        printf("Filiere : %s\n", EnsTab.tab[i].filiere);
        if (i < EnsTab.lenght-1) printf("\n");
    }
}

Etudiant get_Etudiant(String matricule){
    Etudiant e;
    return e;
}

Etudiant add_Etudiant(Etudiant e){
    return e;
}

Etudiant del_Etudiant(String matricule){
    Etudiant e;
    return e;
}

Etudiant upd_Etudiant(String matricule){
    Etudiant e;
    return e;
}
