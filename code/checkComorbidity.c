int checkComorbidity(){
    char input;
    printf("Possui alguma comorbidade(S/N): \n");
    scanf("%c", input);

    while(input != ('s' || 'S' || 'n' ||'N')){
    switch(input){
        case 's':
        case 'S':
        return 1;
        break;
        case 'n':
        case 'N':
        return 0;
        default:
        printf("Opção inválida, por digite novamente.");
    }   
}