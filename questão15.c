#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    //Implemente um programa que converta valores entre diferentes unidades de medida, 
    //como por exemplo, quilômetros para milhas e Celsius para Fahrenheit.
    //O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores.
    //Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.

    
int main() {
    int cod;
    float quilometros,distancia,temp,conv;

    while (1) {
        printf("______________________________________\n");
        printf("|   | Escolha uma opcao de conversao:|\n");
        printf("| 1 |   De Quilometros para Milhas   |\n");
        printf("| 2 |   De Celsius para Fahrenheit   |\n");
        printf("| 0 |   Sair do programa             |\n");
        printf("|____________________________________|\n");
        scanf("%d", &cod);

        if (cod == 0) {
            printf("FIM DO PROGRAMA.\n");
            break;
        }

        switch (cod) {
             case 1:
            printf("Digite a distancia em quilometros: \n");
            scanf("%f", &quilometros);
            distancia = quilometros * 0.621371; 
            printf("%.2f quilometros e igual a %.2f milhas.\n",quilometros, distancia);
            break;
            
            case 2:
            printf("Digite a temperatura em graus Celsius: ");
            scanf("%f", &temp);
            conv = temp * 9 / 5 + 32; 
            printf("%.2fº Celsius é igual a %.2fº Fahrenheit.\n", temp, conv);
            break;
            
            default:
                printf("ESCOLHA UMA OPÇÃO VÁLIDA\n");
        }
    }

    return 0;
}