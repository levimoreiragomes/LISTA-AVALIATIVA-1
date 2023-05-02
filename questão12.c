#include <stdio.h>

int main() {
    float vetor[5], maior, menor, media, soma = 0.0;
    int i;

    // preencher o vetor
    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vetor[i]);

        // atualizar soma
        soma += vetor[i];

        // inicializar maior e menor
        if (i == 0) {
            maior = menor = vetor[0];
        }

        // atualizar maior e menor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // calcular média
    media = soma / 5;

    // mostrar resultados
    printf("Valores digitados: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
