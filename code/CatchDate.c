#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include "JustNumberPlease.c"
#include "MenuGiveUp.c"
#include "Register.c"

int CatchDate(char nome[], 
char cep[],
char cpf[],
char tel[],
char email[])

{

    int i = 0;
    int j = 0;

    printf("\n*****************\n");
    printf("\nPor favor, insira os dados do paciente:\n");
    printf("Nome: \n");

    scanf("%s", nome);
    //scanf("%[\n]", nome);
    //scanf("%*[^\n]");
    //scanf("%*c");
    printf("CEP: \n");
    scanf("%s", cep);

    i = 0;
    while (!JustNumberPlease(cep, 8))
    {
        /*Enquanto a JustNumberPlease retornar false,
        A pergunta continuará a se repetir algumas vezes, até a condição ser ativada
        e o usuário escolher sair no MenuGiveUp.
         */
        printf("\nAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("CEP: \n");
        scanf("%s", cep);

        if (i == 5)
        {
            printf("\n****************************************\n");
            printf("Múltiplas tentativas foram detectadas, o que você deseja?");

            if (!MenuGiveUp())
            {
                return 0;
            }
            else
            {
                i = 0;
            }
        }

        i++;
    }

    printf("CPF: \n");
    scanf("%s", cpf);


         i = 0;
    while (!JustNumberPlease(cpf, 11))
    {
        printf("\nAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("CPF: \n");
        scanf("%s", cpf);

        if (i == 5)
        {
            printf("\n****************************************\n");
            printf("Múltiplas tentativas foram detectadas, o que você deseja?");

            if (!MenuGiveUp())
            {
                return 0;
            }
            else
            {
                i = 0;
            }
        }

        i++;
    }


    printf("Telefone com DDD: \n");
    scanf("%s", tel);


    i = 0;
    while (!JustNumberPlease(tel, 11))
    {
        printf("\nAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("Telefone: \n");
        scanf("%s", tel);

        if (i == 5)
        {
            printf("\n****************************************\n");
            printf("Múltiplas tentativas foram detectadas, o que você deseja?");

            if (!MenuGiveUp())
            {
                return 0;
            }
            else
            {
                i = 0;
            }
        }

        i++;
    }

    printf("E-mail: \n");
    scanf("%s", email);
//Ainda falta fazer a validação do arroba
    printf("Por favor, digite em forma numérica o dia, mês e ano de nascimento\n");
    Data nasc = GetAge();
    printf("Por favor, digite em forma numérica o dia, mês e ano do diagnóstico\n");
    Data diag = GetAge();

    Register(cep, nome, cpf, tel, email, nasc, diag);
}