#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    //Crie um programa que solicite do usuário dois
    //números inteiros e informe qual destes números é o maior e qual é o menor.

    
int main(){
    setlocale (LC_ALL,"portuguese");
    
    float num1, num2; 
    
    printf ("Digite o primeiro número:\n");
    scanf ("%f", &num1);
    
    printf ("Digite o segundo número:\n");
    scanf ("%f", &num2);
    
    if (num1 > num2){
        printf ("O número %.2f é o maior e o número %.2f é o menor", num1, num2);
    }else {
        printf ("O número %.2f é o maior e o número %.2f é o menor", num2, num1);
    }
    
    return 0;
}