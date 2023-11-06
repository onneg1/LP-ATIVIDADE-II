#include <stdio.h>
#include <locale.h>
#include <string.h>

//Em um projeto de controle de acesso, 
//crie um programa que solicite ao usuário sua idade e verifique 
//se ele tem permissão para acessar um determinado recurso. 
//Se a idade for maior ou igual a 18, exiba a mensagem "Acesso permitido". 
//Caso contrário, exiba a mensagem "Acesso negado".


int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int idade;
    
    //pedir dados ao usuário
    printf ("O recurso só pode ser acessado por maiores de 18 anos.\n");
    printf ("Por gentileza, digite a sua idade.\n");
    scanf ("%d", &idade);
    
    //condição para acesso ao recurso
    if (idade >= 18){
        printf ("ACESSO PERMITIDO.\n");
    } else {
        printf ("ACESSO NEGADO.\n");
    }
    
    
    
    return 0;
}