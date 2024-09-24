#include <stdio.h>

int main() {
    char nom[10];
    char prenom[10];
    int age;
    char sexe;
    char email[35];

    // Saisie des informations
    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre prénom : ");
    scanf("%s", prenom);
    printf("Entrez votre âge : ");
    scanf("%d", &age);
    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);
    printf("Entrez votre adresse email : ");
    scanf("%s", email);

    // Affichage des informations
    printf("voici vos informations personnelle :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %s\n", email);

    return 0;
}
