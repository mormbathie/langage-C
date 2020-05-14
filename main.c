#include <stdio.h>
#include <stdlib.h>
int main()
  {
     // Addition //
     int num1, num2, num3, opperation;
     printf("choisir\n");
     printf("1= +\n2= -\n3= /\n4= *\n5= %\n");
     scanf("%d", &opperation);
     printf("Entrez le premier nombre " );
     scanf("%d", &num1);
     printf("Entrez le deuxiem nombre " );
     scanf("%d", &num2);
     printf("Entrez le troisiem nombre " );
     scanf("%d", &num3);


     if(opperation == 1)
          printf("la sommes est %d \n " ,  num1 + num2 + num3 );
     else if(opperation == 2)
          printf("la Soustraction  est %d \n " ,  num1 - num2 - num3);
     else if(opperation == 3)
          printf("la Division est %d \n " ,  num1 / num2 / num3 );
     else if(opperation == 4)
          printf("la Multiplication  est %d \n " ,  num1 * num2 * num3);
     else if(opperation == 5)
          printf("le Modulo est %d \n " ,  num1 % num2 % num3);
     else
            printf("cette oppération n'est pas dissponnible sur le systeme essyez de voire un autre methode");

    return 0;
}
