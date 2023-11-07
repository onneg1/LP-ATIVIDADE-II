#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

    //Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. 
    //O programa deve calcular e exibir a média das notas digitadas. 
    //Utilize o for para repetir o processo de solicitação das notas..
    
    int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int i, contador, soma=0, qtd;
    float media, nota;
    
    printf ("Digite a quantidade de notas que deseja inserir:\n");
    scanf ("%d", &qtd);
    
    for (i=1;i<=qtd;i++){
        printf ("Digite sua %dº nota:\n", i);
        scanf ("%f", &nota);
        soma += nota;
    }
    if (nota>=0){
    media = soma/qtd;
    }
    
    printf ("A média de todas suas notas foi: %.2f\n", media);
    
    return 0;
}