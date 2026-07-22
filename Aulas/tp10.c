#include <stdlib.h>

typedef struct nodo{
    int valor;
    struct nodo *l, *r;
} *ABin;
//
int altura(ABin a){
    if(a == NULL) return 0;
    int nodosL = 0;
    int nodosR = 0;

    nodosL += altura(a -> l);
    nodosR += altura(a -> r);

    return (nodosL > nodosR ? nodosL : nodosR) + 1;
}

//

ABin removeMenor(ABin *a){
    if(*a == NULL) return NULL;
    if((*a) -> l == NULL){
        if((*a) -> r == NULL){
            free(*a);
            *a = NULL;
        } else {
            ABin temp = *a;
            a = &((*a) -> r);
            temp = *a;
            free(temp);
            temp = NULL;
        }
    }

    return removeMenor((*a) -> l);
}



void removeRaiz(ABin *a){
    if(*a == NULL) return;

    ABin temp = *a;

    if((*a) -> l == NULL){
        *a = (*a) -> r;
        free(temp);
    } else if((*a) -> r == NULL){
        *a = (*a) -> l;
        free(temp);
    } else if((*a) -> l != NULL && (*a) -> r != NULL){
        a = removeMenor(&((*a) -> r));
    }
    
}

int f(LInt l){
    LInt curr = l;
    int  = 0;
    while(curr != NULL){
        if(curr -> valor % 2 == 0){
            LInt new = malloc(sizeof(struct no));
            new = curr;
            new -> prox = curr -> prox;
            new = curr;
            c++;
        }

        curr = curr -> prox;
    } return c;
}