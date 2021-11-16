#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>

#include "GetAge.c"

_Bool checkRisk(Data dataNasc, Data dataDiag, char comorbidade){

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

        if(age >=65 && comorbidade != "Nenhuma"){
        return 1;
        } else {
            return 0;
        };


}