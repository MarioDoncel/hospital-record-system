#include <stdio.h>

#include <string.h>
#include "GetAge.c"
#include "GetAddress.c"
#include "calculateAge.c"


void Register(
    char cep[], 
    char nome[],
    char cpf[],
    char tel[],
    char email[],
    Endereco endereco,
    Data dataNasc,
    Data dataDiag,
    char comorbidade[], 
    char comorbidadeDetalhes[]
)
{

    FILE *paciente;                                           //Inicializou o ponteiro de arquivo
    paciente = fopen("pacientes/dates.txt", "a");             //Criou o arquivo, ou atualizou, se existente
    //Começa a escrever no arquivo dates.txt
    fprintf(paciente, "\nNOME: %s\n", nome);
    fprintf(paciente, "CPF: %s\n", cpf);
    fprintf(paciente, "TELEFONE: %s\n", tel);
    fprintf(paciente, "EMAIL: %s\n", email);
    fprintf(paciente, "DATA DE NASCIMENTO: %s/%s/%s \n", dataNasc.dia, dataNasc.mes, dataNasc.ano);
    fprintf(paciente, "ENDEREÇO:");
    fprintf(paciente, "Rua %s, %s\n", endereco.rua, endereco.numero);
    fprintf(paciente, "%s\n", endereco.bairro);
    fprintf(paciente, "%s/SP\n", endereco.cidade);
    fprintf(paciente, "%s\n", cep);
    if(comorbidade == 'Sim'){
    fprintf(paciente, "Possui as seguintes comorbidades: \n");
    fprintf(paciente, "%s\n", comorbidadeDetalhes); 
    } else {
        fprintf(paciente, "Não possui comorbidades. \n");
    }
    fprintf(paciente, "DATA DE DIAGINÓSTICO: %s/%s/%s \n", dataDiag.dia, dataDiag.mes, dataDiag.ano);

    //Encerra a API e a leitura do arquivo
    fclose(paciente);

    int age = calculateAge(dataNasc, dataDiag);

    if(age>65 && comorbidade == 'Sim'){
        FILE *pacienteRisco;
        pacienteRisco = fopen("pacientes/pacientesRisco.txt", "a");             //Criou o arquivo, ou atualizou, se existente
    //Começa a escrever no arquivo dates.txt
        fprintf(pacienteRisco, "\nCEP: %s\n", cep);
        fprintf(pacienteRisco, "IDADE: %s\n", age);
        fprintf(pacienteRisco, "-------------");
        fclose(pacienteRisco);

    }
    

    printf("\nO Paciente foi cadastrado!");
    getOsClearScreen();
    Menu();
}