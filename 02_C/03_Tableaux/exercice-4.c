# include<stdio.h>

int main()
{
char C, ch[100];
int i, B;

printf("Entrer un caractere:");
scanf("%c", &C);

printf("Saisir une chaine:");
gets(ch);

      for(i = 0; ch[i] != '\0'; ++i)
   {
       if(ch[i] == C)
       {
           ++B;
       }
   }
printf("Le caractere %c est present %d fois", C, B);

return 0;
}