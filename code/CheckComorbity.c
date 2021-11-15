#include <stdio.h>
#include <stdbool.h>

_Bool CheckComorbity() {

char input[2]; 
    printf("Possui alguma comorbidade?");

    scanf("%s", input);

    while(true){


    switch(input[0]){
        case 115: 
        case 83:
        clearBuffer();
        return 1;
        break;
        case 110:
        case 78:
        clearBuffer();
        return 0;
        default:
        printf("Opção inválida, por digite novamente.");
        printf("Possui alguma comorbidade?");
        scanf("%s", input);
    }   
    }
}