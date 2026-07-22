#include <stdio.h> 
#include <math.h>

void desenha (int N) {
    for (int i = 0; i < N; i ++) {
          for (int j = 0; j < N; j ++ ) {
            printf("#");
          }
          printf("\n");
    }
}


void desenha1 (int N) {
    for (int i = 0; i < N; i ++ ) {
        for (int j = 0; j < N; j ++) {
           if ((j + i) % 2 == 0) {
            printf("#");
           } else printf("_");
        } printf ("\n");
    }
}


void triangulos1 (int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n"); 
    }
}


void triangulos2(int N){
    int t = N - 1;
    for (int i = t; i > 0; i --){
        for (int j = 0; j < i; j ++){
             printf("#");
        } printf(" ");
    } 
}

void triangulos3 (int N) {
    for (int i = 0; i < N; i ++ ){
        for (int j = N; j < N - i - 1; j --){
            printf(" ");
        } 
        for (int j = 0; j <= i; j ++){
            printf("#");
        }
        printf("\n");
    }
}


void circulo(int R){
    int tamanho = 2 * R ;
    int distCenter = R; 
    for (int i = 0; i < tamanho; i ++){
        for (int j = 0; j < tamanho; j ++ ){
            int dx = i - distCenter;
            int dy = j - distCenter;
            double dist = sqrt(dx * dx + dy * dy);
            if (dist < R + 1){
                printf("#");
            } else printf(" ");

        } printf("\n");

    }
}


float multInt (int n, float m){
    
}

int main() {
        triangulos1 (5);
        triangulos2 (5);
        return 0;
    } 
