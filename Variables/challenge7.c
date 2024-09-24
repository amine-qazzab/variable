#include <stdio.h>

int main() {

    float a,b,c,moy;

    printf("Veuillez entrer la note A et B et C:");
    scanf("%f%f%f",&a,&b,&c);

    moy = ((a*2)+(b*3)+(c*5))/10;
    printf("Votre Moyenne est: %.3f",moy);

    return 0;
}
