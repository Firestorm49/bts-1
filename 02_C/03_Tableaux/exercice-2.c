# include<stdio.h>

#define TAILLE 8

int main()
{
int tab[TAILLE];
int i;

printf("Ecrire des caracteres :");
scanf("%s", &tab);

printf("Le deuxieme caractere saisie est : %c", tab[1]);

return 0;
}