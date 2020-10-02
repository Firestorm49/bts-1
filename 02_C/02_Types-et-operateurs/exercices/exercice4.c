#include <stdio.h>

int main() {
    int C, R;
    printf("Entrer deux nombre:");
    scanf( "%d", &C);
    scanf( "%d", &R);
    if (C==0 || R==0) {
        printf("Le produit de C et R est nul");
    }
    else if ((C<0 && R>0) || (C>0 && R<0)) {
        printf("Le produit de C et R est négatif");
        }
        else {
        printf("Le produit de C et R est positif");
        }
    return 0;

}