#include <stdio.h>

int main() {
    int C;
    printf("Entrer un nombre(different de 0):");
    scanf( "%d", &C);
    if (C>0) {
        printf("C'est un nombre positif");
    }
    else if (C<0) {
        printf("c'est un nombre negatif");
        
    }
    return 0;

}