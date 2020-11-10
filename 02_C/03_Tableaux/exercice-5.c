# include<stdio.h>

int main()
{
int nb_jours[]={31,28,31,30,31,30,31,31,30,31,30,31};
int i, j, m, compteur=0;

printf("Saisir une date");
scanf("%d / %d", &j, &m);


for (i=0 ; i<=m-2; i ++){
compteur+= nb_jours [i];
}
compteur=compteur+j;
printf("le %d / %d est %d eme jour de l'annee" ,j, m, compteur);


return 0;
}