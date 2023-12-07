#include <stdio.h>

int main() {
    int N, product = 1;

    printf("N sayısını girin: ");
    scanf("%d", &N);

    for (int i = 3; i <= N; i += 2) {
        product *= i;
    }

    printf("3'ten %d'e kadar olan tek sayıların çarpımı: %d\n", N, product);

    return 0;
}
