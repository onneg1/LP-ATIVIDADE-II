#include <stdio.h>
#include <locale.h>
#include <string.h>

//Enquanto você faz parte de uma equipe de desenvolvimento de software, 
//desenvolva um programa que solicite ao usuário que escolha um idioma de preferência 
//(1 - Inglês, 2 - Espanhol, 3 - Francês). Com base na escolha do usuário,
//exiba a mensagem de boas-vindas no idioma selecionado.


int main() {
    setlocale (LC_ALL,"Portuguese");
    
    int pref;
    char r [250];
 
    
    printf (" ______________________________________\n");
    printf ("|Olá! Qual a sua preferência de idioma?|\n");
    printf ("| 1 |          INGLÊS                  |\n");
    printf ("| 2 |          ESPANHOL                |\n");
    printf ("| 3 |          FRANCÊS                 |\n");
    printf ("|___|__________________________________|\n\n");
    scanf ("%d", &pref);
    
    switch (pref){
        case 1: strcpy (r, "Welcome! your language is English!\n");
        break;
        
        case 2: strcpy (r, "Bienvenue! votre langue est le français!\n");
        break;
        
        case 3: strcpy (r, "Bienvenido, tu idioma es el español!\n");
        break;
        
        default: strcpy (r, "Linguagem incorreta! Escolha uma das 3 apresentadas.\n");
    }
    
    printf ("%s", r);
    
    return 0;
}