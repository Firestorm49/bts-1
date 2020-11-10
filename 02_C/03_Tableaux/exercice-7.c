# include<stdio.h>
#define i 5
#define  r 5
int main()
{

int tab1[i];
int tab2[r];
int tab3[i+r];
int a;

 for (a = 0; a < i ; a++) {
   tab1[a]=a+1;
   
    }
for (a = 0; a < r ; a++) {
    tab2[a]=a+1+i;
    }
    printf("Le premier tableau de taille %d : ", i);
for (a = 0; a < i ; a++) {
printf("%d ", tab1[a]);
    }
     printf("\n Le deuxieme tableau de taille %d : ", r);
for (a = 0; a < r ; a++) {
   printf("%d  ", tab2[a]);
    }
     for(a = 0; a < r ; a++) {
tab3[a]=tab1[a];
    }
for(a = 0; a < r ; a++) {
tab3[i+a]=tab2[a];
    }
     printf("\n Le troisieme tableau de taille %d : ", r+i);
    for(a = 0; a < r+i ; a++) {
printf("%d  ", tab3[a]);
    }
return 0;
}