#include <stdio.h>

int main() {
    int Max, I, N;
    Max=0;
    for(I=1; I<=5; I++){
    printf("Entrer un nombre:");
     scanf( "%d", &N);
     if ((I==1) || (N > Max)){
         Max=N;
    }
    }
    printf("Le nombre le plus grand est %d", Max);
    return 0;

}