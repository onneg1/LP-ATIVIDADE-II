#include <stdio.h>
#include <locale.h>
#include <string.h>

//Em um projeto de classificação de alunos, 
//desenvolva um programa que receba a nota de um aluno e determine 
//sua classificação com base na seguinte tabela:
   //- Nota maior ou igual a 9: "Excelente"
   //- Nota entre 7 e 8.9: "Bom"
   //- Nota entre 5 e 6.9: "Razoável"
   //- Nota menor que 5: "Insuficiente"


int main() {
    setlocale (LC_ALL,"Portuguese");
    
    float nota;
    
    printf ("Digite qual a sua nota:\n");
    scanf ("%f", &nota);
    
    if (nota >= 9){
        printf ("EXCELENTE.\n");
    } else if (nota >= 7 && nota <= 8.9){
        printf ("BOM.\n");
    } else if (nota >= 5 && nota <= 6.9){
        printf ("RAZOÁVEL.\n");
    } else {
        printf ("INSUFICIENTE.\n");
    }
    
    
    return 0;
}