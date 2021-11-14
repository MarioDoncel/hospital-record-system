#include <stdio.h>
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

int input;

    printf("\t\t\t*******************************\n");
    printf("\t\t\n***** SISTEMA DE CADASTRAMENTO DE PACIENTE COM COVID *****\n\n");
    printf("______________________________________________________________________________\n\n\n");
    printf("\t\t\t 1-Cadastrar Paciente\n");
    printf("\t\t\t 6-Sair\n\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("\nEscolha uma opção:");
    scanf("%i", &input);

    switch(input){
        case 1:
        getOsClearScreen();
        CatchDate(nome, cep, cpf, tel, email);
        break;
        case 6:
        getOsClearScreen();
        return 0;
        break;
    }
}
