#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
#include "JustNumberPlease.c"
#include "MenuGiveUp.c"
#include "Register.c"
#include "clearScreen.c"
#include "CheckComorbity.c"

char nome[100];
char cpf[100];
char cep[100];
char tel[100];
char email[100];
char comorbidade[100]="Nenhuma";
int CatchDate()

{
  Endereco Endereco; 

    int i = 0;
    int j = 0;

    printf("\n*****************\n");
    printf("\n\tPor favor, insira os dados do paciente:\n");
    printf("\tNome: \n");

    fgets(nome, 30, stdin);
    
    while (!JustLetterPlease(nome)){
        printf("Por favor, digite somente letras.\n");
        fgets(nome, 30, stdin);
    
    }
    clearBuffer();
    printf("\tCEP: \n");
    scanf("%s", cep);
    clearBuffer();

    i = 0;
    while (!JustNumberPlease(cep, 8))
    {
        /*Enquanto a JustNumberPlease retornar false,
        A pergunta continuará a se repetir algumas vezes, até a condição ser ativada
        e o usuário escolher sair no MenuGiveUp.
         */
        printf("\n\tAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("\tCEP: \n");
         scanf("%s", cep);
         clearBuffer();
        

        if (i == 5)
        {
            printf("\n****************************************\n");
            clearScreen();
            printf("\tMúltiplas tentativas foram detectadas, o que você deseja?");

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
    printf("\tRua: \n");
    fgets(Endereco.rua, 20, stdin);
    printf("\tNumero: \n");
    fgets(Endereco.numero, 20, stdin);
    printf("\tBairro: \n");
    fgets(Endereco.bairro, 20, stdin);
    printf("\tCidade: \n");
    fgets(Endereco.cidade, 20, stdin);
    printf("\tEstado: \n");
    fgets(Endereco.estado, 20, stdin);
    while (!JustLetterPlease(Endereco.estado)){
        printf("\tPor favor, digite somente letras.");
        fgets(Endereco.estado, 25, stdin);
    
    }

    printf("\tCPF: \n");
    scanf("%s", cpf);
    clearBuffer();


         i = 0;
    while (!JustNumberPlease(cpf, 11))
    {
        printf("\n\tAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("\tCPF: \n");
    scanf("%s", cpf);
    clearBuffer();
        if (i == 5)
        {
            printf("\n****************************************\n");
            clearScreen();
            printf("\tMúltiplas tentativas foram detectadas, o que você deseja?");

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


    printf("\tTelefone com DDD: \n");
      scanf("%s", tel);
    clearBuffer();

    i = 0;
    while (!JustNumberPlease(tel, 11))
    {
        printf("\n\tAlgo está errado, por favor digite apenas números e fique atento na quantidade...\n");
        printf("\tTelefone: \n");
         scanf("%s", tel);
         clearBuffer();

        if (i == 5)
        {
            printf("\n****************************************\n");
            printf("\tMúltiplas tentativas foram detectadas, o que você deseja?");

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

    printf("\tE-mail: \n");
    fgets(email, 25, stdin);
//Ainda falta fazer a validação do arroba
    printf("\tPor favor, digite em forma numérica o dia, mês e ano de nascimento\n");
    
    Data nasc = GetAge();
    printf("\tPor favor, digite em forma numérica o dia, mês e ano do diagnóstico\n");
    Data diag = GetAge();

 
   if(CheckComorbity()){
           
            printf("\tQuais?\n");
            fgets(comorbidade, 100, stdin);
    }

    clearScreen();
    Register(cep, nome, cpf, tel, email, Endereco, nasc, diag, comorbidade);
}