#include <stdio.h>
#include <stdbool.h>
#include <curl/curl.h>
#include<string.h>
#include "CatchDates.c"
#include "LoginIsRight.c"

//Variáveis globais de login, passadas de parâmetro p função LoginIsRight
char AdminLogin[]="admin";
char AdminPassword[]="12345";

//Dados do paciente, passados de parâmetro p função CatchDates
char nome[100];
char CPF[100];
char cep[100];
char tel[100];
char dataNasc[100];
char email[100];
char dataDiag[100];
char comorbidade[100];

void main() {

int authorized = 0; //Variável de controle de acesso

printf("HELLO WORLD! That's my project!\n");
printf("*******************************\n");
printf("\n*****SISTEMA DE CADASTRAMENTO DE PACIENTE COM COVID*****\n");

//Se a função abaixo retornar false, os dados não poderão ser cadastrados. 
if(LoginIsRight(AdminLogin, AdminPassword)){
        printf("Login correto!\n");
        authorized=1;

}else {
        printf("Usuário ou senha estão errados, digite novamente.");
        
        while(!LoginIsRight(AdminLogin, AdminPassword)){
        printf("Usuário ou senha estão errados, digite novamente.");
        }
        printf("Login correto!\n");
        authorized=1;
};

if(authorized=1){
  CatchDates(nome, cep);
};

}

