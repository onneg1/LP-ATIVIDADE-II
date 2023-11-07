#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

//Crie um programa que solicite ao usuário 
//dois números e uma operação matemática (+, -). 
//Utilize o switch case para realizar a operação desejada e exibir o resultado.

int main() {
    setlocale (LC_ALL,"Portuguese");
    
    float n1, n2;
    char op;
    
    
    printf ("Digite o primeiro número: \n");
    scanf ("%f", &n1);
    
    printf ("Digite o segundo número: \n");
    scanf ("%f", &n2);
     
    system ("clear");
    fflush (stdin);
    
    printf ("Escolha uma operação!\n");
    printf ("+ = Operação de soma.\n");
    printf ("- = Operação de subtração.\n");
    scanf (" %c", &op);
   

    switch (op){
        
        case '+': printf ("A soma do número %.2f + %.2f é: %.2f", n1,n2, n1+n2);
        break;
        
        case '-': printf ("A subtração do número %.2f - %.2f é: %.2f", n1,n2, n1-n2);
        break;
        
        default: printf ("Opção inválida!");
        break;
    }

    
    return 0;
}