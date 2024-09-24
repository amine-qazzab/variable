#include <stdio.h>
int main() {
    float kilometres_par_heure, metres_par_seconde; 
    printf("Entrez la vitesse en kilomètres par heure :\n");
    scanf("%f", &kilometres_par_heure);
    metres_par_seconde = kilometres_par_heure * 0.27778;
    printf("la vitesse en mètres par seconde est : %.2f\n",metres_par_seconde);
    return 0;
}