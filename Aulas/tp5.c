#include <stdlib.h>
#include <stdio.h>

typedef struct aluno{
    int numero;
    char nome[100];
    int miniT[6];
    float teste;
} Aluno;
// função auxiliar para ordenação
void swap(int v[], int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

void bbsortTurma(Aluno t[], int N){
    int i, j;
    int sorted = 0;
    for(i = N - 1; i > 1 && !sorted; i--)
        sorted = 1;
        for(j = 0; j < i; j++)
            if(t[j].numero > t[j+1].numero) 
                swap(t, j, j + 1);
                sorted = 0;
}
//

int nota(Aluno a){

    int minit = 0;
    for(int i = 0; i < 6; i++){
        minit += a.miniT[i];
    }

    minit /= 8;

    int nota = minit + a.teste;

    return nota;
}


int procuraNum(int num, Aluno t[], int N){
    int i = 0;

    for(; i < N && num != t[i].numero; i++);

    return t[i].numero;
}



void ordena(Aluno t[], int N){
    int sorted = 0;

    for(int i = N - 1; i > 1 && !sorted; i++){
        sorted = 1;
        for(int j = 0; j < i; j++)
            if(t[j].numero > t[j+1].numero)
                swap(t, j, j + 1);
                sorted = 0;
    }
}
int minInd(Aluno t[], int N){
    int i = 1;
    int minInd = 0;
    for(; i < N; i++){
        if(t[minInd].numero > t[i].numero)
            minInd = i;
    } return minInd;
}
void criaIndPNum(Aluno t[], int N, int ind[]){

    for(int i = 0; i < N; i++){
        int minind = minInd(t+i, N-i);
        ind[i] = minind;
    }
}

void imprimeTurma(int ind[], Aluno t[], int N){ // não percebi bem este exerício
    bbsortTurma(t, N);
    for(int i = 0; i < N; i++)
        fprinf(stdout, "%d, %s, %d, %d", t[i].numero, t[i].nome, t[i].miniT, t[i].teste);
        fflush(stdout);
}





