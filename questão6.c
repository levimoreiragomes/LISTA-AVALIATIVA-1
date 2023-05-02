#include <stdio.h>

int main() {
    int vetor[8], x, y;
    for (int i = 0; i < 8; i++) {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite a posicao X: ");
    scanf("%d", &x);
    printf("Digite a posicao Y: ");
    scanf("%d", &y);
    int soma = vetor[x] + vetor[y];
    printf("Soma: %d\n", soma);
    return 0;
}
