#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    //Desenvolva um programa que solicite ao usuário um número inteiro positivo e 
    //faça uma contagem regressiva a partir desse número até zero. 
    //Utilize o switch case para exibir mensagens personalizadas 
    //para cada número da contagem regressiva.
int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int num, i;
    
    printf ("Contagem regressiva a partir de um número inteiro:\n");
    printf ("Digite um número inteiro positivo:\n");
    scanf ("%d", &num);
    
    for (i=num; i>=0; i--){
        printf ("\n%d", i);
    }

    return 0;

    //não consegui assimilar muito bem o uso do switch
    //case para adicionar mensagens.
    //atividade segue mostrando apenas os números inteiros positivos 
    //em contagem regressiva.
    
    
    
    return 0;
}