#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n = 29743390;
    long long max_prime = -1;

    // Divide por 2 até não dar mais
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    // Procura por divisores ímpares
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    // Se no final sobrar um número maior que 2, ele próprio é o maior primo
    if (n > 2) {
        max_prime = n;
    }

    printf("RESPOSTA EXATA PARA O TESTE: %lld\n", max_prime);
    return 0;
}