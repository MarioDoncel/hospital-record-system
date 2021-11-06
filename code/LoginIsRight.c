_Bool LoginIsRight(char AdminLogin[], char AdminPassword[]){
    int verificator = 0;
    char input;
    char employeeLogin[15] = "admin";
    char typedLogin[15];
    char employeePassword[15] = "12345";
    char typedPassword[15];

    while (verificator != 1)
    {
        printf("\nDigite o usuário: \n");
        scanf("%s", &typedLogin);
        printf("Digite a senha: \n");
        scanf("%s", &typedPassword);
    
    if (strcmp(typedLogin, employeeLogin) == 0 && strcmp(typedPassword, employeePassword) == 0)
        {
            printf("\n\nLOGADO!\n\n");
            verificator = 1;
            system("PAUSE");
            fflush(stdin);
        }
           
        else
        {
            printf("\n\nDADOS INVALIDOS.\n\n");
            printf("Deseja tentar novamente? (S/N) \n");
            scanf("%c", &input);
            if(input == "N" || input == "n"){
                system("cls");
                return 0;
            }
            system("PAUSE");
            system("cls");
        }             
    }
        return 1;
}