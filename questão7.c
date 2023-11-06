#include <stdio.h>
#include <locale.h>
#include <string.h>

//Em um projeto para um jogo, é necessário cria um menu, 
//crie um programa que exiba um menu com opções (1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações).
//Solicite ao usuário que escolha uma opção e, utilizando o switch case, 
//execute a funcionalidade correspondente à opção escolhida.


int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int op;
    char r [250];
    
    printf ("ÍNICIO DO JOGO\n");
    printf ("SELECIONE UMA OPÇÃO:\n");
    printf ("1 - NOVO JOGO;\n");
    printf ("2 - CARREGAR JOGO;\n");
    printf ("3 - CONFIGURAÇÕES.\n");
    scanf ("%d", &op);
    
    switch (op){
        
        case 1: strcpy (r, "INÍCIO DE UM NOVO JOGO. BOM JOGO!\n");
        break;
        
        case 2: strcpy (r, "CARREGANDO UM JOGO JÁ INICIADO...\n");
        break;
        
        case 3: strcpy (r, "CONFIGURAÇÕES DO JOGO:\n");
        break;
        
        default: strcpy (r, "OPÇÃO INVÁLIDA!\n");
    }
    
    printf ("%s", r);
    
    return 0;
}