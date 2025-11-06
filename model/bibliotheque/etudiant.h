#define etudiant_h

typedef char String[50];

typedef struct{
    String matricule;
    String name;
    char sexe;
    int age;
    int niveau;
    String filiere;
} Etudiant;

typedef struct{
    Etudiant tab[2];
    int lenght;
} EnsEtudiant;


void list_Etudiant(EnsEtudiant e);
Etudiant get_Etudiant(String matricule);
Etudiant add_Etudiant(Etudiant etudiant);
Etudiant del_Etudiant(String matricule);
Etudiant upd_Etudiant(String matricule);