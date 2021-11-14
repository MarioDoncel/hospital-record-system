#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct Endereco {
    char rua[25];
    char bairro[25];
    char numero[25];
    char estado[25];

} Endereco;


typedef struct {
    char dia[6];
    char mes[6];
    char ano[6];
} Data ;

Data GetAge () {
    Data Data; 

    //printf("Por favor, digite em forma numérica o dia, mês e ano de nascimento\n");
    

    printf("Dia:\n");
    scanf("%s", Data.dia);
            while(!JustNumberPlease(Data.dia, 0)||
             !(atoi(Data.dia)>0&&atoi(Data.dia)<32))
             {
            printf("Por favor, digte um dia válido: ");
               scanf("%s", Data.dia);
        }


    printf("\nMês:\n");
    scanf("%s",Data.mes);
             while(!JustNumberPlease(Data.mes, 0)||
             !(atoi(Data.mes)>0&&atoi(Data.mes)<13))
             {
            printf("Por favor, digite um mês válido: ");
               scanf("%s", Data.mes);
        }
        



    printf("\nAno:\n");
    scanf("%s", Data.ano);
        while(!JustNumberPlease(Data.ano, 4)){
            printf("Por favor, digite um ano válido com 4 digitos: ");
               scanf("%s", Data.ano);
        }

    printf("\n\n%s/%s/%s\n\n", Data.dia, Data.mes, Data.ano);

return Data;
}


