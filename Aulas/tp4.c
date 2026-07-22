#include <stdlib.h>

int contaVogais(char *s){
    int i, c;
    c = i = 0;
    while(s[i] != '\0'){
        if(isv(s[i])) c++;
        i++; 
    } return c;
}

int repvog(char *s){
    int w, c, r;
    w = c = 0;
    r = 1;
    int i = 0;
    char *aux;
    while(s[r] != '\0'){
        while(!isv(s[r]) || s[r] == ' '){
            aux[i] = s[r];
            r++;
            c++;
            i++;
        }

        aux[i] = s[r];

        while(isv(s[r])) r++;
    } 
    
    aux[i] = '\0';
    strcpy(aux, &s);
    return c;
}


int repvog2(char *s){
    int w, r, c;
    w = c = 0;
    r = 0;

    while(s[r] != '\0'){
        s[w++] = s[r]; c++;
        if(isv(s[r]) && isv(s[r+1])) r++;
        r++;
    } 
    s[w] = '\0';
    return c;
}   


int duplicaVogais(char *s){
    int c, w, r;
    char *aux;
    int i = 0;

    while(s[r] != '\0'){
        while(!isv(s[r])){
            aux[i] = s[r];
            i++; r++;
        }
        while(isv(s[r])){
            c++;
            r++;
        }

        while(2 * c >= 0) {
            aux[i] = s[r];
            c--;
            i++;
        }
        
    }

    aux[i] = '\0';
    strcpy(aux, &s);
    return i + 1;
}



int ordendo(int v[], int N){
    int i = 0;

    for(; i < N - 1; i++){
        if(v[i] > v[i + 1]) return 0;
    }

    return 1;
}


void merge(int a[], int na, int b[], int nb, int r[]){
    int i = 0;
    int j = 0;
    int rw = 0;
    while(i < na && j < nb){
        if(a[i] < b[j]) {r[rw] = a[i]; i++; rw ++;}
        else {r[rw] = b[j]; rw++; j++;}
    }

    while(i < na){
        r[rw] = a[i];
        i++;
        rw++;
    }

    while(j < nb){
        r[rw] = b[j];
        j++;
        rw++;
    }
}

