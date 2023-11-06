#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

//Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. 
//O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana. 
//Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.



int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int diacompras;
    float valorcompras, desc, valorfinal;
    
    printf ("Olá! Bem-vindo ao seu melhor sistema de descontos!\n");
    printf ("Compras acima de R$100,00 em um dia a semana: 10 de desconto!\n");
    printf ("Compras acima de R$100,00 em finais de semana: 15 de desconto!\n");
    printf ("Por gentileza, me informe qual o valor total das suas compras:\n");
    scanf ("%f", &valorcompras);
    
    system ("clear");
    
    printf ("Em qual dia da semana você fez as suas compras?\n");
    printf ("1 - DOMINGO\n");
    printf ("2 - SEGUNDA-FEIRA\n");
    printf ("3 - TERÇA-FEIRA\n");
    printf ("4 - QUARTA-FEIRA\n");
    printf ("5 - QUINTA-FEIRA\n");
    printf ("6 - SEXTA-FEIRA\n");
    printf ("7 - DOMINGO\n");
    scanf ("%d", &diacompras);
    
    if (valorcompras > 100){
    switch (diacompras){
        
        case 1: desc = (valorcompras/100)*15;
        break;
        
        case 2: desc = (valorcompras/100)*10;
        break;
        
        case 3: desc = (valorcompras/100)*10;
        break;
        
        case 4: desc = (valorcompras/100)*10;
        break;
        
        case 6: desc = (valorcompras/100)*10;
        break;
        
        case 7: desc = (valorcompras/100)*15;
        break; 
        
        default: printf ("Dia inválido! Escolha um dos dias disponíveis\n");
    }
}
    valorfinal = valorcompras - desc;
    
    
    printf ("O valor da sua compra foi: %.2f você teve %.2f em descontos.\n", valorcompras, desc);
    printf ("O valor que você vai pagar é de: %.2f", valorfinal);
    
    return 0;
}