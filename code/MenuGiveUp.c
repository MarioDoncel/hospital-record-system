#include<stdio.h>
#include<stdbool.h>


_Bool MenuGiveUp(){

int input; 

 printf("\n\n______________________________________________________________________________\n\n");
    printf("1-Continuar tentando\n");
    printf("2-Desistir:\n");
    printf("---------------------------------------------------------------------------\n\n");
    printf("\nEscolha uma opção:");
    scanf("%i", &input);
    printf("****************************************");

while(true){
switch(input){
     case 1:
     return 1;
     break;
     case 2:
     return 0;
    default:
    printf("Opção inválida, por digite novamente.");
 }   

}
 
}

