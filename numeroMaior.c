#include <stdio.h>
//Mior dos 3 números
int main() {
    int a, b, c, maior;

    printf("Entre com o primeiro número: \n");
    scanf("%d", &a);

    printf("Entre com o segundo número: \n");
    scanf("%d", &b);

    printf("Entre com o terceiro número: \n");
    scanf("%d", &c);

    maior = a; // Assume que 'a' é o maior inicialmente

    if (b > maior) {
        maior = b; // Se 'b' for maior que o atual 'maior', atualiza 'maior'
    }

    if (c > maior) {
        maior = c; // Se 'c' for maior que o atual 'maior', atualiza 'maior'
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}