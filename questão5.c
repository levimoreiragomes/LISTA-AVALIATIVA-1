#include <stdio.h>

int main() {
    int vetor[10], count = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            count++;
        }
    }
    printf("O vetor tem %d valores pares\n", count);
    return 0;
}
