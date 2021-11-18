#include <stdio.h>
#include "CatchDate.c"

//Dados do paciente, passados de parâmetro p função CatchDates


//char comorbidade[100];


int Menu()
{


int input;

    printf("\t\t\t*******************************\n");
    printf("\n\t***** SISTEMA DE CADASTRAMENTO DE PACIENTE COM COVID *****\n");

    printf("______________________________________________________________________________\n\n");
    printf("\t\t\t1-Cadastrar Paciente\n");
    printf("\t\t\t6-Sair\n\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("\n\tEscolha uma opção:");
    scanf("%i", &input);
    clearBuffer();

    switch(input){
        case 1:
        clearScreen();
        CatchDate();
        break;
        case 6:
        return 0;
        break;

    }


}
