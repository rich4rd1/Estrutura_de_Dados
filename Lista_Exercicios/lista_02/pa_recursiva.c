#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo){
    
    if (primeiro >= ultimo)
        return 1;

    int soma1 = v[primeiro] + v[ultimo];
    int soma2 = v[primeiro + 1] + v[ultimo - 1];


    if (soma1 != soma2)
        return 0;
    
    return pa_recursiva(v, primeiro + 1, ultimo - 1);
}   