#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>


typedef struct {
    char rua[30];
    char bairro[25];
    char numero[4];
    char cidade[25];
} Endereco ;

Endereco GetAddress () {
    Endereco Endereco;

    printf("Rua: \n");
    scanf("%s", Endereco.rua);
    printf("Bairro: \n");
    scanf("%s", Endereco.bairro);
    printf("Numero: \n");
    scanf("%s", Endereco.numero);
    printf("Cidade: \n");
    scanf("%s", Endereco.cidade);

    printf("\n\n%s/%s/%s/%s\n\n", Endereco.rua, Endereco.bairro, Endereco.numero, Endereco.cidade);

return Endereco;
}
