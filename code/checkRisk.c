#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>

_Bool checkRisk(int age, char comorbidade){

        if(age >=65 && comorbidade != "Nenhuma"){
        return 1;
        } else {
            return 0;
        };


}