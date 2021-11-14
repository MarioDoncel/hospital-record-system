#include "GetAge.c"


int calculateAge(Data dataNasc, Data dataDiag){
    int age;
    age = dataDiag.ano - dataNasc.ano;
    
    if(dataDiag.mes < dataNasc.mes) {
        return age - 1;} 

    if(dataDiag.mes > dataNasc.mes || dataDiag.dia >= dataNasc.dia){
        return age;
    } else {
        return age-1;
    }

}