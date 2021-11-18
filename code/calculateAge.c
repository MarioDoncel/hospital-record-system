#include "GetAge.c"


int calculateAge(Data dataNasc, Data dataDiag){
    int anoNasc = atoi(dataNasc.ano); 
    int anoDiag = atoi(dataDiag.ano);
    int mesNasc = atoi(dataNasc.mes);
    int mesDiag = atoi(dataDiag.mes);
    int diaNasc = atoi(dataNasc.dia);
    int diaDiag = atoi(dataDiag.dia);

    int age;

    age = anoDiag - anoNasc;
    
    if(mesDiag < mesNasc) {
        age = age - 1;
    } 

    if(mesDiag > mesNasc || diaDiag >= diaNasc){
        age = age;
    } else {
        age = age-1;
    }
    return age;
}