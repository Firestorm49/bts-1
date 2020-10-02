#include <stdio.h>

int main() {
    int C, R;
    printf("Entrer deux nombre:");
    scanf( "%d", &C);
    scanf( "%d", &R);
    if (C==0 || R==0) {
        printf("Le produit de %d et %d est nul", C, R);
    }
    else if ((C<0 && R>0) || (C>0 && R<0)) {
        printf("Le produit de %d et %d est négatif", C, R);
        }
        else {
        printf("Le produit de %d et %d est positif", C, R);
        }
    return 0;

}