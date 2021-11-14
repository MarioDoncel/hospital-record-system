#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include "JustNumberPlease.c"
#include "MenuGiveUp.c"
#include "Register.c"
#include "clearScreen.c"

char nome[100];
char cpf[100];
char cep[100];
char tel[100];
char email[100];

int CatchDate()

{
  Endereco Endereco; 

    int i = 0;
    int j = 0;

    printf("\n*****************\n");
    printf("\nPor favor, insira os dados do paciente:\n");
    printf("Nome: \n");

    fgets(nome, '\n', stdin);
    
    while (!JustLetterPlease(nome)){
        printf("Por favor, digite somente letras.");
        fgets(nome, 25, stdin);
    
    }
    clearBuffer();
    printf("CEP: \n");
    scanf("%s", cep);
    clearBuffer();

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
         clearBuffer();
        

        if (i == 5)
        {
            printf("\n****************************************\n");
            clearScreen();
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


    //fgets(*string, quantidade de caracteres, FILE*), stdin se refere a entrada do teclado, mas fgets pode ser usado p ler um arquivo também.
    printf("Rua: \n");
    fgets(Endereco.rua, 20, stdin);
    printf("Numero: \n");
    fgets(Endereco.numero, 20, stdin);
    printf("Bairro: \n");
    fgets(Endereco.bairro, 20, stdin);
    printf("Estado: \n");
    fgets(Endereco.estado, 20, stdin);
    while (!JustLetterPlease(Endereco.estado)){
        printf("Por favor, digite somente letras.");
        fgets(Endereco.estado, 25, stdin);
    
    }

    printf("CPF: \n");
    scanf("%s", cpf);
    clearBuffer();


         i = 0;
    while (!JustNumberPlease(cpf, 11))
    {
        printf("\nAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("CPF: \n");
    scanf("%s", cpf);
    clearBuffer();
        if (i == 5)
        {
            printf("\n****************************************\n");
            clearScreen();
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
    clearBuffer();

    i = 0;
    while (!JustNumberPlease(tel, 11))
    {
        printf("\nAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("Telefone: \n");
         scanf("%s", tel);
         clearBuffer();

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
    fgets(email, 25, stdin);
//Ainda falta fazer a validação do arroba
    printf("Por favor, digite em forma numérica o dia, mês e ano de nascimento\n");
    
    Data nasc = GetAge();
    printf("Por favor, digite em forma numérica o dia, mês e ano do diagnóstico\n");
    Data diag = GetAge();

    

    clearScreen();
    Register(cep, nome, cpf, tel, email, Endereco, nasc, diag);
}