#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

    //Implemente um programa que solicite do usuário números inteiros e verifique quantos 
    //números são pares e quantos são ímpares. Além disto, deve ser exibido a média 
    //aritmética de números pares e impares. Deve-se interromper a leitura dos dados
    //quando for digitado um valor negativo.
    //Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

    
int main(){
    
    int num, par=0, impar;
    float somapar=0, somaimpar=0, mediapar, mediaimpar;

    do {
        printf ("Digite um número inteiro:\n");
        scanf ("%d", &num);
        
        if (num>0){
            if (num%2==0){
                par++;
                somapar+=num;
            } else {
                impar++;
                somaimpar+=num;
            }
        }
        
    }while (num>0);
    
    if (par>0){
        mediapar=somapar/par;
        printf ("Números pares: %d\n", par);
        printf ("Média de todos números pares: %2.f\n", mediapar);
    }else{
        printf ("\nNenhum número par informado!\n");
    }
    
    if (impar>0){
    mediaimpar=somaimpar/impar;
    printf ("Números ímpares: %d\n", impar);
    printf ("Média de todos números ímpares: %2.f\n", mediaimpar);
    }else{
        printf ("\nNenhum número impar foi informado!\n");
    }
    
    
    return 0;
    
}