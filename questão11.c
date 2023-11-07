#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    //Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, 
    //dado um código de acesso, permita ao usuário entrar em um edifício. 
    //O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
    
    int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int cod; 
    
    
    do {
        printf ("Digite o código CORRETO de acesso:\n");
        scanf ("%d", &cod);
        
    } while (cod != 123456);

    if (cod == 123456){
        printf ("\nCÓDIGO CORRETO, ACESSO PERMITIDO.\n");
}
    
    return 0;
}