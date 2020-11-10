# include<stdio.h>

int main()
{
char C, ch[44]="It's gonna be legend... wait for it... dary!";
int B, i;

      for(i = 0; ch[i] != '\0'; ++i)
   {
       if(ch[i] == 'a')
           ++B;
   }
printf("Le caractere %c est present %d fois", 'a', B);

return 0;
}