#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include "LoginIsRight.c"
#include "Menu.c"

//Variáveis globais de login, passadas de parâmetro p função LoginIsRight
//char AdminLogin[]="admin";
//char AdminPassword[]="12345";



int main() {

  printf("Bem-vindo ao HOSPITAL UNIP!\n");


//Se a função abaixo retornar false, os dados não poderão ser cadastrados. 
if(LoginIsRight()){
        printf("Login correto!\n");
        Menu();
<<<<<<< HEAD
}

 printf("\n\n+++++++++++++++FIM DO PROGRAMA**************\n\n");
 return 0;
 
=======
};

printf("\n\n+++++++++++++++FIM DO PROGRAMA**************\n\n");

>>>>>>> 4e056023815131b0cd9e979e473effa51cacfc48
 //CatchDate(nome, cep);

}

