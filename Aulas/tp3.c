#include <stdio.h>
#include <stdlib.h>


void swapMap (int *x, int *y){
    int varTemp = 0;
    varTemp = *x;
    *x = *y;
    *y = varTemp;
   
}

void swap (int v[], int i, int j){
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;


}
 

int soma (int v[], int N){
    int soma = 0;
    for (int i = 0; i < N; i ++){
        soma += v[i];

    } return soma;
} 


void inverteArray1 (int v[], int N){
    int guarda = 0;
    for (int i = 0; i < N; i ++){
        guarda = v[i];
        v[i] = v[N-1-i];
        v[N-1-i] = guarda;

    }

}

int maximum(int v[], int N, int *m){
    if (N <= 0) return 1;
    *m = v[0];



    for (int i = 1; i < N; i ++){
        if (v[i] > *m){
            *m = v[i];
        }
    } return 0;

}





void quadrados(int q[], int N){

    for(int i = 0; i < N; i ++){
        q[i] = q[i] ^ 2;  
    }

}

int quadrados2 (int q[], int N){
    for (int i = 1; i < N; i ++){
        q[i] = q[i-1] ^ 2 + (2 * q[i] + 1);
    }
}