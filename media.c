#include <stdio.h>

    int main() {

float nota1, nota2, resultado;
        
printf("Entre com a primeira nota: \n");
scanf("%f",&nota1);

printf("Entre com a segunda nota: \n");
scanf("%f",&nota2);

resultado = (nota1 + nota2) / 2.0;

if (resultado >= 5)
{
    printf("Media: %.2f, Você foi aprovado!\n", resultado);
    
}

else
{
    printf("Media: %.2f, Você foi reprovado!\n", resultado);
}



     return 0;


     }