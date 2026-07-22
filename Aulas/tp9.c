#include <stdlib.h>

typedef struct nodo{
    int valor;
    struct nodo *l, *r;
} *ABin;


int altura(ABin a){
    if(a == NULL) return 0;
    if(a -> r != NULL || a -> l != NULL) return 1;
    int nodosL = 0;
    int nodosR = 0;

    nodosL += altura(a -> l);
    nodosR += altura(a -> r);

    return (nodosR > nodosL ? nodosR : nodosL) + 1;
}


int folhas(ABin a){
    if(a == NULL) return 0;

    if(a -> r == NULL && a -> l == NULL) return 1;

    return folhas(a -> l) + folhas(a -> r);
}

ABin maisesq(ABin a){
    if(a == NULL) return NULL;

    if(a -> l == NULL) return a;

    return maisesq(a -> l);
}

void imprimeL(ABin a, int k){
    if(a == NULL) return;

    if(k == 0){printf("%d", a -> valor); return;}

    imprimeL(a -> l, k - 1);
    imprimeL(a -> r, k - 1);
}


int procuraE(ABin a, int x){ //o facto de não podermos assumir propriedades sobre a árvore, torna esta função bastante ineficiente -> O(N)
    if(a == NULL) return 0;

    if(a -> valor == x) return 1;

    procuraE(a -> l, x);
    procuraE(a -> r, x);
}

struct nodo *procura(ABin a, int x){ // neste exercício já podemos considerar propriedades AVL -> O(logN)
    if(a == NULL) return NULL;

    if(a -> valor == x) return a;
    else if(a -> valor > x) return procura(a -> l, x);
    else return procura(a -> r, x);
}

int nivel(ABin a, int x){ // assumindo que a raíz da árvore se encontra no nível 1 (AVL).
    if(a == NULL) return 0;

    int level = 1;

    if(a -> valor == x) return 1;
    else if(a -> valor > x) return level += nivel(a -> l, x);
    else if(a -> valor < x) return level += nivel(a -> r, x);
    
    return -1;
}


void imprimeAte(ABin a, int x){
    if(a == NULL || a -> valor == x) return;
    if(a -> valor > x) prinf("%d", a -> valor);
    imprimeAte(a -> l, x); 
}

