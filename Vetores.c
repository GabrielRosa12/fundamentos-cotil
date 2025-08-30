#include <stdio.h>

int main() {
    int vetor[10];  // Declara um vetor de 10 elementos
    int i, maior;

    // Solicita ao usuário que digite os 10 valores
    printf("Digite 10 valores:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa o maior valor com o primeiro elemento do vetor
    maior = vetor[0];

    // Encontra o maior valor no vetor
    for(i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Exibe o maior valor encontrado
    printf("O maior valor digitado é: %d\n", maior);

    return 0;
}
