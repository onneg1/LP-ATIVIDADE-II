#include <stdio.h>
#include <locale.h>
#include <string.h>

//Você é um desenvolvedor de jogos e está trabalhando em 
//um novo jogo de aventura. O jogo tem um sistema de clima 
//que depende da temperatura externa. Se a temperatura for 
//superior a 25 graus Celsius, o clima será ensolarado. 
//Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso.
//Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.

int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int temp;
    char r [250];
    
    printf ("GAME DE TEMPERATURA: LEIA AS INTRUÇÕES A SEGUIR:\n");
    printf ("Qual a temperatura atual?\n");
    printf ("Se a temperatura for maior 25º celsius: Clima ensolarado\n");
    printf ("Se a temperatura for menor 15º celsius: Clima chuvoso\n");
    printf ("Se a temperatura for maior que 15º ou menor que 25º celsius: clima nublado\n");
    scanf ("%d", &temp);
    
    if (temp > 25){
        strcpy (r, "O clima está ensolarado!\n");
    } else if (temp < 15){
        strcpy (r, "O clima está chuvoso!\n");
    } else if (temp >= 15 && temp <= 25) {
        strcpy (r, "O clima está nublado!\n");
    }
    
    printf ("%s", r);

    return 0;
}