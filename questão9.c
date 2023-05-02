#include <stdio.h>

int main() {
  int vetor[6];

  // Leitura dos valores pares e armazenamento no vetor
  for (int i = 0; i < 6; i++) {
    do {
      printf("Digite o %dº número par: ", i+1);
      scanf("%d", &vetor[i]);
    } while (vetor[i] % 2 != 0);
  }

  // Impressão dos valores na ordem inversa
  printf("\nValores na ordem inversa: ");
  for (int i = 5; i >= 0; i--) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
