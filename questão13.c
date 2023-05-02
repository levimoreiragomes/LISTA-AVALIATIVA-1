#include <stdio.h>

int main() {
    float vetor[5], maior, menor;
    int i, posicao_maior, posicao_menor;

    // preencher o vetor
    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vetor[i]);

        // inicializar maior e menor
        if (i == 0) {
            maior = menor = vetor[0];
            posicao_maior = posicao_menor = 0;
        }

        // atualizar maior e menor
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    // mostrar resultados
    printf("
