#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include <locale.h>
#include "LoginIsRight.c"
#include "Menu.c"
#include "clearScreen.c"


//Variáveis globais de login, passadas de parâmetro p função LoginIsRight
//char AdminLogin[]="admin";
//char AdminPassword[]="12345";

int main() {
  setlocale(LC_ALL, "Portuguese");
  printf("Bem-vindo ao HOSPITAL UNIP!\n");


//Se a função abaixo retornar false, os dados não poderão ser cadastrados. 
if(LoginIsRight()){
        printf("Login correto!\n");
        getOsClearScreen();
        Menu();
}

 printf("\n\n+++++++++++++++ FIM DO PROGRAMA +++++++++++++++\n\n");
 return 0;
 
 //CatchDate(nome, cep);

}

