#include <stdio.h>

#include <string.h>
#include "GetAge.c"


void Register(
    char cep[], 
    char nome[],
    char cpf[],
    char tel[],
    char email[],
    Endereco endereco,
    Data dataNasc,
    Data dataDiag
)
{

    FILE *fp;                                           //Inicializou o ponteiro de arquivo
    fp = fopen("pacientes/dates.txt", "a");             //Criou o arquivo, ou atualizou, se existente
    //Começa a escrever no arquivo dates.txt
    fprintf(fp, "\nNOME: %s\n", nome);
    fprintf(fp, "CPF: %s\n", cpf);
    fprintf(fp, "TELEFONE: %s\n", tel);
    fprintf(fp, "EMAIL: %s\n", email);
    fprintf(fp, "DATA DE NASCIMENTO: %s/%s/%s \n", dataNasc.dia, dataNasc.mes, dataNasc.ano);
    fprintf(fp, "DATA DE DIAGINÓSTICO: %s/%s/%s \n", dataDiag.dia, dataDiag.mes, dataDiag.ano);

    fprintf(fp, "ENDEREÇO:");
    fprintf(fp, "******\n");

    //Encerra a API e a leitura do arquivo
    fclose(fp);

    printf("\nO endereço foi cadastrado");
}