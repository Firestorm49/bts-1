#include <stdio.h>

int main() {
    int A;
    do{
    printf("Entrer un nombre entre 1 et 10:");
    scanf( "%d", &A);}
    while(A<0 || A>10);
    return 0;

}