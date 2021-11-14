#include <stdio.h>
#include <curl/curl.h>
#include "CatchDate.c"

//Dados do paciente, passados de parâmetro p função CatchDates
char nome[100];
char cpf[100];
char cep[100];
char tel[100];
char email[100];

typedef struct Endereco{
    char rua[30];
    char bairro[25];
    char numero[4];
    char cidade[25];
} Endereco ;

Endereco endereco;
//char comorbidade[100];

int Menu()
{

int input;

    printf("\t\t\t*******************************\n");
    printf("\n***** SISTEMA DE CADASTRAMENTO DE PACIENTE COM COVID *****\n\n");
    printf("______________________________________________________________________________\n");
    printf("\t\t\t 1-Cadastrar Paciente\n");
    printf("\t\t\t 6-Sair\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("\nEscolha uma opção:");
    scanf("%i", &input);

    switch(input){
        case 1:
        CatchDate(nome, cep, cpf, tel, email, endereco);
        break;
        case 6:
        return 0;
        break;
    }
}
