#include <stdio.h>
#include <locale.h>
#include <string.h>

//Considerando um projeto de e-commerce, 
//implemente um programa que solicite ao usuário o código do produto (1 - Camiseta, 2 - Calça, 3 - Sapato). 
//Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.


int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int op;
    char r [250];
    
    printf ("Digite qual código você gostaria de adquirir:\n");
    printf ("1 - CAMISETA\n");
    printf ("2 - CALÇA\n");
    printf ("3 - SAPATO\n");
    scanf ("%d", &op);
    
    switch (op){
        
        case 1: strcpy (r, "Você selecionou adquirir uma CAMISETA.\n");
        break;
        
        case 2: strcpy (r, "Você selecionou adquirir uma CALÇA.\n");
        break;
        
        case 3: strcpy (r, "Você selecionou adquirir um SAPATO.\n");
        break;
        
        deafult: strcpy (r, "Opção inválida! Escolha uma das três.\n");
    }
    
    printf ("%s", r);
    
    return 0;
}