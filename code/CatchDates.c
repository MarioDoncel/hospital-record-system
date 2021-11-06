#include <stdio.h>
#include <curl/curl.h>
#include<string.h>

int CatchDates( char nome[], char cep[]){

            char json[]="/json"; // --> final do link 
            char api_locate[]="https://viacep.com.br/ws/"; //----> link da api
            char complete_link[100]; // ---> link completo
            //Variáveis de contagem no looping ........... ahh, como seria bom um .map aqui :p
            int i = 0;
            int j = 0;

printf("\n*****************\n");
printf("\nPor favor, insira os dados do paciente:\n");
printf("Nome: \n");
scanf("%s", nome);
printf("CEP: \n");
scanf("%s", cep);

//Junta o CEP com o restante do link (api_locate[] e json[])
    while(api_locate[i]!='\0'){
        complete_link[i] = api_locate[i];
        i++;
    };

    while(cep[j]!='\0'){
        complete_link[i] = cep[j];
        i++;
        j++;
    };
    j=0;

    while(json[j]!='\0'){
        complete_link[i] = json[j];
        i++;
        j++;
    };
//


//Função da libcurl que passa os valores da api pro arquivo .txt
size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream){
    size_t written = fwrite(ptr, size, nmemb, stream);
    return written;
};


    
    CURL *curl = curl_easy_init(); //inicia o ponteiro referente a lib curl
    
    FILE *fp; //Inicializou o ponteiro de arquivo
    fp = fopen("pacientes/dates.txt", "a"); //Criou o arquivo, ou atualizou, se existente
    curl_easy_setopt(curl, CURLOPT_URL,complete_link); //--> faz a request http no complete_link
   // curl_easy_setopt(curl, CURLOPT_FAILONERROR, true); IGNORAR POR ENQUANTO

    //Começa a escrever no arquivo dates.txt
            fprintf(fp, "\nNOME: %s\n", nome);
            fprintf(fp, "ENDEREÇO:");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);  //o endereço do packet.json é escrito na variável fp, que corresponde ao endereço de memória do arquivo dates.txt
            curl_easy_perform(curl);
            fprintf(fp,"******\n");

    //Encerra a API e a leitura do arquivo    
    curl_easy_cleanup(curl);
    fclose(fp);
   

printf("\nO endereço foi cadastrado: %s\n", complete_link);
}