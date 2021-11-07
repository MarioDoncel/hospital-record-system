#include <stdio.h>
#include "CatchDate.c"

//Dados do paciente, passados de parâmetro p função CatchDates


void Menu()
{


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
        CatchDate(nome, cep);
        break;
        case 6:
        printf("A");
        break;

    }


}
