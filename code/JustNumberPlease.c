#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
/*Essa função verifica se o char passado é número e caso necessário,
faz uma validação de quantidade.
Caso não queira verificar quantidade, apenas os números,
basta colocar o parâmetro y como 0.
*/
_Bool JustNumberPlease(char x[], int y)
{
    /*char cpf[11];

printf("Por favor digite o seu CPF...");
scanf("%s", cpf);
*/
    int i = 0;
    while (x[i] != '\0')
    {
        if (!isdigit(x[i]))
        {
            return 0;
        };

        i++;
    }
//Se todos chars passados forem números, então o código continua p ver se a quantidade está correta
    if (y != 0)
    {
        if (i != y)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    return 1;
}


_Bool JustLetterPlease(char string[]){
int i=0;
    
    while(isdigit(string[i])||string[i]!='\0'){
        if(isdigit(string[i])){
             return 0;
        }
       
        i++;
    }
  //  printf("%s", string[i]);
    return 1;

}