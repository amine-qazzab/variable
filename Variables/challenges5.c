#include <stdio.h>


int main() {

    float temp;
    printf("Veuillez entrer la température en Celsius:");
    scanf("%f",&temp);

    if (temp<0) {
    printf("l'état de l'eau est Solide"); 
    }
    else if (temp>=0 && temp<100 ) {
    printf("l'état de l'eau est Liquid");
    }
    else if (temp>=100) {
    printf("l'état de l'eau est Gaz"); 
    }

    return 0;
}