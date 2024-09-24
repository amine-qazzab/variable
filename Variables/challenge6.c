#include <stdio.h>

int main() {
    float a,b,plus,moin,div,mult;
    printf("Veuillez entrer le nombre A et B:");
    scanf("%f%f",&a,&b);
    plus = a+b;
    moin = a-b;
    div = a/b;
    mult = a*b;
    printf("La somme est: %3.f \n La Soustraction est: %3.f \n La Multiplication est: %3.f \n La Division est: %3.f",plus,moin,mult,div);

    return 0;
}
