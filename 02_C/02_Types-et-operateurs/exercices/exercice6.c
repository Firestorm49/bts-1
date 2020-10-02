#include <stdio.h>

int main() {
    int Max, I, Somme;
    printf("Donner un nombre:");
    scanf( "%d", &Max);
    Somme=0;
    for(I=0; I<Max+1; I++){
        Somme= Somme+I;
    }
    printf("La Somme des entiers jusqu'a %d est %d", Max, Somme);
    return 0;

}