#include <stdio.h>

 main (){
  int idade;
printf("informe a idade: ");
scanf("%i",&idade);
if(idade>= 18){
  printf("já é maior de idade");
  printf("\nPode dirrigir");
}
   else {
     int falta= 18-idade;
     printf("\n terá apenas %i anos",falta);
   }
}
  