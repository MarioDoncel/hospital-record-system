#include <stdio.h>
#include <string.h>
#include "checkRisk.c"

void Register(
    char cep[], 
    char nome[],
    char cpf[],
    char tel[],
    char email[],
    Endereco Endereco,
    Data dataNasc,
    Data dataDiag,
    char comorbidade[]
)
{

   
    int i = 0;
    int j = 0;
   


    FILE *fpaciente;  
                                     
    fpaciente = fopen("../pacientes/dates.txt", "a");   

    fprintf(fpaciente, "\n-----------------------------------\n" );
    fprintf(fpaciente, "NOME: %s", nome);
    fprintf(fpaciente, "CPF: %s\n", cpf);
    fprintf(fpaciente, "TELEFONE: %s\n", tel);
    fprintf(fpaciente, "ENDEREÇO:\nRUA: %s %s", Endereco.rua, Endereco.numero);
    fprintf(fpaciente, "Bairro: %s - %s/%s", Endereco.bairro, Endereco.cidade, Endereco.estado);
    fprintf(fpaciente, "EMAIL: %s", email);
    fprintf(fpaciente, "DATA DE NASCIMENTO: %s/%s/%s \n", dataNasc.dia, dataNasc.mes, dataNasc.ano);
    fprintf(fpaciente, "DATA DE DIAGINÓSTICO: %s/%s/%s \n", dataDiag.dia, dataDiag.mes, dataDiag.ano);
    fprintf(fpaciente, "COMORBIDADES:\n -%s", comorbidade);
    fclose(fpaciente);


    if(checkRisk(dataNasc, dataDiag, comorbidade)){
        FILE *fpacienteRisco;        

        fpacienteRisco = fopen ("../pacientes/risk.txt", "a");       

         fprintf(fpacienteRisco, "\n-----------------------------------\n" );
        fprintf(fpacienteRisco, "PACIENTE GRUPO DE RISCO(maiores que 65 anos):\n %s", nome);
        fprintf(fpacienteRisco, "CEP %s\n", cep);
        fprintf(fpacienteRisco, "COMORBIDADES:\n {%s}", comorbidade);

        fclose(fpacienteRisco);
    };
    

 
    printf("\nDADOS CADASTRADOS!");
    clearScreen();
    Menu();
}