#include <stdio.h>
#include <string.h>
#include "JustNumberPlease.c"
#include "MenuGiveUp.c"
#include "Register.c"


int CatchDate(char nome[], 
char cep[],
char cpf[],
char tel[],
char email[]
)

{
    char input[1];
    char comorbidade[4];
    char comorbidadeDetalhes[100];
    int i = 0;

    printf("\nPor favor, insira os dados do paciente:\n");

    printf("Nome: \n");
    scanf("%s", nome);

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
    };

    

//Ainda falta fazer a validação do arroba
    printf("Por favor, digite em forma numérica o dia, mês e ano de nascimento\n");
    Data nasc = GetAge();
    printf("Por favor, digite em forma numérica o dia, mês e ano do diagnóstico\n");
    Data diag = GetAge();
    Endereco endereco = GetAddress();

    printf("Possui alguma comorbidade?(S/N) \n");
    scanf("%c", comorbidade);
     while(true){

        if(input==110||input==78){  //n e N na tabela ASCII
            char comorbidade = 'Não';
            break;
        }else if(input==115||input==83){ //s e S na tabela ASCII
            char comorbidade = 'Sim';
            printf("Comorbidade(s): \n");
            scanf("%[^\n]", comorbidadeDetalhes);
            break;
        }else {
            printf("Por favor digite somente S ou N:\n");
            scanf("%s", &input);
        }

    Register(cep, nome, cpf, tel, email, endereco, nasc, diag);
}