#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>

#include "GetAge.c"

int checkRisk(Data dataNasc, Data dataDiag){

    int anoNasc = atoi(dataNasc.ano); 
    int anoDiag = atoi(dataDiag.ano);
    int mesNasc = atoi(dataNasc.mes);
    int mesDiag = atoi(dataDiag.mes);
    int diaNasc = atoi(dataNasc.dia);
    int diaDiag = atoi(dataDiag.dia);

    int age;
  

    age = anoDiag - anoNasc;


          if(age>=65){
              if(mesNasc<mesDiag){
                  if(diaNasc<diaDiag){
                      age = 64;
                  }
              }
          } 

        return age;
}