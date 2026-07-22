#include <stdio.h>
#include <stdlib.h>



int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    // Verifica apenas até a raiz quadrada para ser instantâneo
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int contagem = 0;

    // O teu intervalo específico do teste
    for (int i = 1559637; i <= 1659643 ; i++) {
        if (is_prime(i)) {
            contagem++;
        }
    }

    printf("RESPOSTA EXATA PARA O TESTE: %d\n", contagem);
    return 0;
}