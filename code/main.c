#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include "LoginIsRight.c"
#include "Menu.c"

/*O que está dentro da função, está dentro da main. Mas não necessariamente o que está na main, está na função.*/

//Variáveis globais de login, passadas de parâmetro p função LoginIsRight
//char AdminLogin[]="admin";
//char AdminPassword[]="12345";



int main(void){



  printf("Bem-vindo ao HOSPITAL UNIP!\n");


//Se a função abaixo retornar false, os dados não poderão ser cadastrados. 
if(LoginIsRight()){
        printf("Login correto!\n");
        clearScreen();
        Menu();
}


 printf("\n\n+++++++++++++++ FIM DO PROGRAMA +++++++++++++++++++++\n\n");
 return 0;
 
 //CatchDate(nome, cep);

}

