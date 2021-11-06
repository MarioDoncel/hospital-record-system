_Bool LoginIsRight(char AdminLogin[], char AdminPassword[]){
    int i = 0;
    int verificator = 0;

//Variáveis de login digitadas pelo usuário
    char TypedLogin[]="12345";
    char TypedPassword[]="admin";

    printf("\nDigite o usuário: \n");
    scanf("%s", &TypedLogin);
    printf("Digite a senha: \n");
    scanf("%s", &TypedPassword);

    while(AdminLogin[i]!='\0'&&AdminPassword[i]!='\0'){
        //Enquanto o login e password admin não chegarem no fim, vai acontecer a verificação de letra por letra das strings
        if(AdminLogin[i]==TypedLogin[i]&&AdminPassword[i]==TypedPassword[i])  {
            verificator = 1;
            //Caso todas as letras digitadas sejam iguais as cadastradas, verificador retorna 1.
        }else {
            verificator = -1;
            break;
            //Caso alguma letra esteja errada, verificador se torna -1 e o looping é quebrado.
        }
        i++;
    }

    if(verificator==1){
        return 1;
        //Se verificador for 1, ou seja, todas as letras estiverem iguais, então a função retorna true. Caso contrário retorna false.
    }else {
        return 0;
    }
}