#include <stdio.h>
#include <math.h>
int main() {
float a,b,c,moy;
printf("Veuillez entrer les trois nombre A et B et C");
scanf("%f%f%f",&a,&b,&c);
moy=cbrt(a*b*c);
    printf("Votre Moyenne est: %.3f",moy);

    return 0;
}
