#include <stdio.h>
#include <curl/curl.h>
#include "CatchDate.c"

//Dados do paciente, passados de parâmetro p função CatchDates
char nome[100];
char cpf[100];
char cep[100];
char tel[100];
char email[100];

//char comorbidade[100];


int Menu()
{
system("clear");
system("cls");

int input;

    printf("*******************************\n");
    printf("\n*****SISTEMA DE CADASTRAMENTO DE PACIENTE COM COVID*****\n");
    printf("\n********\n");

    printf("______________________________________________________________________________\n");
    printf("1-Cadastrar Paciente\n");
    printf("6-Sair\n");
    printf("---------------------------------------------------------------------------\n\n");
    printf("\nEscolha uma opção:");
    scanf("%i", &input);

    switch(input){
        case 1:
        CatchDate(nome, cep, cpf, tel, email);
        break;
        case 6:
        return 0;
        break;

    }


}
