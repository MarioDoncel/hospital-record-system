#include <stdio.h>
#include "CatchDate.c"

//Dados do paciente, passados de parâmetro p função CatchDates
<<<<<<< HEAD
char nome[100];
char cpf[100];
char cep[100];
char tel[100];
char email[100];
=======
>>>>>>> 0b328fdf1440d39eba6294ef61bac6facee333a0


//char comorbidade[100];


int Menu()
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
