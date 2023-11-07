#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    //Em um projeto sobre números primos, implemente um programa que solicite ao 
    //usuário um número inteiro e verifique se ele é um número primo utilizando o switch case. 
    //Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.
    
int main(){
    setlocale (LC_ALL,"portuguese");
    int numero;
    int i;
    int contador;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 0:
    case 1:
        break;
    default:
        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                contador++;
            }
        }
        if (contador == 2)
        {
            printf("%d É primo\n",numero);
        }
        else
        {
           printf ("%d Não é primo\n",numero);
        }

        break;
    }

    return 0;
}