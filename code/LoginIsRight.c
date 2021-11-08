#include <stdio.h>
#include <stdbool.h>
//_Bool LoginIsRight(char AdminLogin[], char AdminPassword[]

int TryAgain();

_Bool LoginIsRight(){


    int verificator = 0;

    char input;

    char employeeLogin[15] = "admin";

    char typedLogin[15];

    char employeePassword[15] = "12345";

    char typedPassword[15];




    while (verificator != 1)

    {

        printf("\nDigite o usuário: \n");

        scanf("%s", typedLogin);

        printf("Digite a senha: \n");

        scanf("%s", typedPassword);


    if (strcmp(typedLogin, employeeLogin) == 0 && strcmp(typedPassword, employeePassword) == 0){

            printf("\n\nLOGADO!\n\n");
            verificator = 1;

            //system("PAUSE");

            fflush(stdin);

           
        }else{

            printf("\n\nDADOS INVALIDOS.\n\n");

      
            printf("Deseja tentar novamente? (S/N) \n");

            scanf("%s", &input);

            if(input==110||input==78){  //n e N na tabela ASCII
               // system("cls");
                    
                    return 0;
                    }
            
            while(true){
    
                if(input==110||input==78){  //n e N na tabela ASCII
               // system("cls");
                    break;

                }else if(input==115||input==83){ //s e S na tabela ASCII
                    break;
                }else {
                
                    printf("Por favor digite somente S ou N:\n");
                    scanf("%s", &input);
                     }

            }
           

       
 
            //system("PAUSE"); --------------------> WINDOWS

            //system("cls") ------------------------> WINDOWS

        }             

    }

        return 1;


} 

