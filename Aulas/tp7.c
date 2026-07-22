#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct celula{
    char *palavra;
    int ocorr;
    struct celula *prox;
} *Palavras;


void liberta(Palavras p){ 
    Palavras curr = p;

    while(curr != NULL){
        Palavras temp = curr;
        curr = curr -> prox;
        free(temp);
        temp = NULL;
    }
}

int quantas(Palavras p){
    int c = 1;
    while(p -> prox != NULL){
       if(strcmp(p -> palavra, p -> prox -> palavra) != 0) c++;
       p = p -> prox;
    }

    return c;
}

void lista(Palavras p){
    while(p != NULL){
        fprintf(stdout, "%s", p -> palavra);
        p = p -> prox;
    }
}

char *ultima(Palavras p){
    while(p -> prox != NULL){
        p = p -> prox;
    }

    return p -> palavra;
}

Palavras acrescenta(Palavras p, char *pal){
    Palavras newp = NULL;
    newp -> ocorr = 0;
    
    Palavras curr = p;
    while(curr != NULL){
        if(curr -> palavra == &pal)
            curr -> ocorr++;
        else{
            newp = p;
            newp -> prox = p -> prox;
            p = newp;
            newp -> ocorr ++;
        }  

        curr = curr -> prox;  
    }

    return newp;
}


struct celula *maisf(Palavras p){
    int i = 0;

    Palavras max = p;
    while(p -> prox != NULL){
        if(p -> ocorr > p -> prox -> ocorr) max = p;
        p = p -> prox;
    }

   return max;
    
}



