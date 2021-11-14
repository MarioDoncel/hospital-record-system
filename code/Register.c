#include <stdio.h>
#include <string.h>
#include "GetAge.c"


void Register(
    char cep[], 
    char nome[],
    char cpf[],
    char tel[],
    char email[],
    Endereco Endereco,
    Data dataNasc,
    Data dataDiag
)
{

   
    int i = 0;
    int j = 0;
   


    FILE *fp;                                           
    fp = fopen("pacientes/dates.txt", "a");         
    fprintf(fp, "NOME: %s", nome);
    fprintf(fp, "CPF: %s\n", cpf);
    fprintf(fp, "TELEFONE: %s\n", tel);
    fprintf(fp, "ENDEREÇO:\nRUA: %s %s", Endereco.rua, Endereco.numero);
    fprintf(fp, "Bairro: %s - %s", Endereco.bairro, Endereco.estado);
    fprintf(fp, "EMAIL: %s", email);
    fprintf(fp, "DATA DE NASCIMENTO: %s/%s/%s \n", dataNasc.dia, dataNasc.mes, dataNasc.ano);
    fprintf(fp, "DATA DE DIAGINÓSTICO: %s/%s/%s \n", dataDiag.dia, dataDiag.mes, dataDiag.ano);
    fclose(fp);

 

    printf("\nO endereço foi cadastrado.");
}