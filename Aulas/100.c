#include <stdlib.h>
#include <stdio.h>
//funções de swap
void swap(int v[], int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}


void swapmtrx(int N, float m[N][N], int i, int j){
    int temp = m[i][j];
    m[i][j] = m[j][i];
    m[j][i] = temp;
}
//



int bitsUm(unsigned int n){
    int c;
    c = 0;
    while(n != 0)
        
        if(n % 2 == 1) c++;

        n /= 2;
    return c;
}

int qdig(unsigned int n){
    int c = 0;

    while(n != 0)
        n /= 10;
        c++;

    return c;
}


char *strcat(char s1[], char s2[]){
    int i = 0;
    char *arr;

    while(s1[i] != '\0') 
        arr[i] = s1[i];
        i++;

    int j = 0;

    while(s2[j] != '\0')
        arr[i] = s2[j];
        j++;
    
    arr[i] = '\0';
    strcpy(arr, s1);
    return &s1;
}


char strcpy(char *dest, char source[]){
    int i = 0;

    while(source[i] != '\0')
        dest[i] = source[i];
        i++;
    
    dest[i] = '\0';
    return *dest;
}

int strcmp(char s1[], char s2[]){
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
        if(s1[i] < s2[i]) return -1;
        else if (s1[i] > s2[i]) return 1;
    
    return 0;
}

char *strstr(char s1[], char s2[]){
    int i = 0; int j = 0;
    int c = 0;
    
    while(s1[i] != '\0' && s2[j] != '\0')
        if(s1[i] == s2[j]){
            i++; j++;
            if(c == 0) c = i;
        } else {
            i++;
            j = 0;
            c = 0;
        }
    if(j == 0) return NULL;

    return c;
}

void strrev(char s[]){
    int end, in;
    end = in = 0;

    while(s[end] != '\0') end++;

    while(in < end){
        char temp = s[in];
        s[in] = s[end];
        s[end] = temp;
    }
}

int isV(char c);

void strnoV(char s[]){
    int i = 0;
    int r = 1;
    while(s[i] != '\0'){
        if(isV(s[i])){
            s[i] = s[r];
        }
        r++;
        i++;
    }

    s[i] = '\0';

    return i;
}

void trunca(char s[], int n){
    int i = 0;

    char *aux;

    while(s[i] != '\0'){
        while(s[i] != ' ' && n >= 0){
            aux[i] = s[i];
            n--;
            i++;
        }

        while(s[i] == ' ') i++;
    }

    aux[i] = '\0';

    strcpy(aux, s);
}

int charmaisfreq(char s[]){
    int maxI;
    int i, c, max;
    i = 1;
    int j = 0;
    c = max = 0;

    while(s[j] != '\0'){
        while(s[i] != '\0'){
            if(s[i] == s[j]) c++;
            i++;
        }

        if(max < c) {
            max = c;
            maxI = j;
        }
        j++;
        i = j + 1;
    }

    return maxI;
}

int iguasConseq(char s[]){
    int i, c, max;

    i = c = max = 0;

    int maxI = -1;

    while(s[i] != '\0'){
        if(s[i] == s[i+1]){
            c++;
        }
        else {
            if(max < c){
                maxI = i;
                max = c;
            }
            c = 0;
        }

        i++;
    }
}


int contaPal(char s[]){
    int i, c;
    i = c = 0;
    int j = 0;
    while(s[i] != '\0'){
        while(s[j] != ' ') j++;
        c++;
        while(s[j] == ' ') j++;
        i = j;
    }

    return c;
}

int contida(char a[], char b[]){
    int i, j;

    i = j = 0;

    while(b[j] != '\0'){
        if(a[i] == '\0') return 1;
        while(a[i] != '\0'){
            if(a[i] == b[j]){
                i ++;
            }
            
            j++;
        }
    }

    return 0;
}

int palindrome(char s[]){
    int i, j;

    i = j = 0;

    while(s[i] != '\0') i++;

    while(j < i){
        if(s[j] != s[i]) return 1; 
        j++; 
        i--;
    }

    return 0;
}


int remp(char s[]){
    int r, w;
    w = 0;
    r = 1;


    while(s[r] != '\0'){
        if(s[w] != s[r]) s[++w] = s[r];
        r++;
    }

    s[w + 1] = '\0';
    return w + 1;
}

int limpaespacos(char s[]){
    int r, w;
    w = 0;
    r = 1;

    while(s[r] != '\0'){
        while(s[r] != ' ') r++;

        while(s[r] == ' '){
            s[++w] = s[r];
            r++;
        }
    }

    s[w + 1] = '\0';
    return w + 1;
}

int insere(int v[], int N, int x){
    int i = N - 1;
    for(; i >= 0 && x > v[i]; i++) v[i+1] = v[i];

    v[i + 1] = x;

    return 0;
}


void merge(int a[], int na, int b[], int nb, int r[]){ // assumindo que r tem espaco na + nb
    int i, j;

    i = j = 0;

    while(i < na && j < nb){
        if(a[i] < b[j]){
            r[i] = a[i];
            i++;
        } else {
            r[i] = b[j];
            j++; i++;
        }
    }

    while(i < na) {r[i] = a[i]; i++;}

    while(j < nb) {r[i] = b[j]; i++; j++;}
}


int crescente(int a[], int i, int j){

    for(i; i < j; i++){
        if(a[i] > a[i+1]) return 0;
    }

    return 1;
}

int retiraneg(int v[], int N){
    int r = 0;
    int w = 0;

    for(; r < N; r++){
        if(v[r] < 0) v[w] = v[r];
        else w++;
    }

    return w;
}

int menosfreq(int v[], int N){
    int i, c, min, j;
    i = 0;
    j = 1;
    min = c = 1;

   while(i < N && v[i] == v[j]){
    c++;
    j++;
   } 

   min = c;
   i = j;

   while(i < N){
    while(v[i] == v[j]) c++;
    if(min > c) min = c;
   }

   return min;
}


int maisfreq(int v[], int N){
    int c, i, j, max;

    c = i = max = 0;

    while(i < N){
        c = 1;
        j = i + 1;
        while(v[i] == v[j]){
            c++;
            j++;
        }

        if(max < c) max = c;
        i = j;
    }

    return max;
}

int elimRep(int v[], int N){
    int r, w;
    r = N - 1;
    w = 0;

    for(; w < r; w++){
        for(; r > w; r--){
            if(v[r] == v[w]) v[r] = -1;
        }
    }

    int aux[w];
    int j = 0;
    for(int i = 0; i < N; i++){
        if(v[i] >= 0) {aux[j] = v[i]; j++;}
    }

    return j;
}



int elimRepOrd(int v[], int N){
    int r, w;
    r = 0;
    w = 0;

    for(; r < N; r++){
        if(v[w] == v[r]) r++;
        else {
            v[++w] = v[r];
        }
    }

    for(int k = w + 1; k < N; k++) v[k] = -1; 
    
    return w + 1;
}

int comunsOrd(int a[], int na, int b[], int nb){
    int i, j, c;

    i = j = c = 0;

    while(i < na && j < nb){
        if(a[i] == b[j] && (a[i] != a[i + 1])) c++;
        i++; j++;
    }

    return c;
}

int comuns(int a[], int na, int b[], int nb){
    int i, j, c;

    i = j = c = 0;

    for(; i < na; i++){
        j = 0;
        while(j < nb){
            if(a[i] == b[j]) c++;
        }
    }

    return c;
}

int minInd(int v[], int N){
    int i = 1;
    int min = 0;

    for(; i < N; i++){
        if(v[min] > v[i]) min = i; 
    }

    return min;
}

void somasAc(int v[], int Ac[], int N){
    int i, j;
    i = j = 1;
    Ac[0] = v[0];
    for(; i < N; i++){
        Ac[j] = Ac[j - 1] + v[i];
        j++;
    }
}

int trisup(int N, float m[N][N]){
    int i, j;
    i = j = 0;

    for(; i < N; i++){
        j = 0;
        for(; j < i; j++){
            if(m[i][j] != 0) return 0;
        }
    }

    return 1;
}

void transposta(int N, float m[N][N]){
    int i, j;
    i = j = 0;

    for(; i < N; i++){
        for(j = i + 1; j < N; j++){
            swap(m, i, j);
        }
    }
}

typedef struct lligada{
    int valor;
    struct lligada *prox;
} *LInt;

int length(LInt l){
    int c = 0;

    while(l != NULL){
        c++;
        l = l -> prox;
    }

    return c;
}

void freeL(LInt l){
    LInt curr = l;

    while(curr != NULL){
        LInt temp = curr;
        curr = curr -> prox;
        free(temp);
        temp = curr;
    }
}

void imprimeL(LInt l){
    LInt curr = l;

    while(curr != NULL){
        fprintf(stdout, "%d", curr -> valor);
        curr = curr -> prox;
    }
}

void reverseL(LInt l){
    LInt prev = NULL;
    LInt curr = l;

    while(curr != NULL){
        LInt next = curr -> prox;
        curr -> prox = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}


void insertOrd(LInt *l, int x){
    LInt new = malloc(sizeof(struct lligada));
    new -> valor = x;
    LInt *curr = l;

    while((*curr) != NULL && (*curr) -> valor < x){
        curr = &((*curr) -> prox);
    }

    new -> prox = (*curr);
    (*curr) = new;

    free(new);
}


int removeOneOrd(LInt *l, int x){
    LInt *curr = l;

    while((*curr) != NULL){
        if((*curr) -> valor == x){
            LInt temp = curr;
            (*curr) = (*curr) -> prox;
            free(temp);
            temp = NULL;

            return 0;
        }

        curr = &((*curr) -> prox);
    }

    return -1;
}


void merge(LInt *r, LInt a, LInt b){
    LInt *curr = r;

    while(a && b){
        if(a -> valor < b -> valor){
            curr = a;
            a = a -> prox;
        } else {
            curr = b;
            b = b -> prox;
        }

        curr = &((*curr) -> prox);
    }

    while(a){
        curr = a;
        a = a -> prox;
        curr = &((*curr) -> prox);
    }

    while(b){
        curr = b;
        a = a -> prox;
        curr = &((*curr) -> prox);
    }
}

void splitqs(LInt l, int x, LInt *mx, LInt *my){
    LInt *currx = mx;
    LInt *curry = my;

    while(l && l -> valor < x){
        currx = l;
        currx = &((*currx) -> prox);
    }

    while(l){
        curry = l;
        curry = &((*curry) -> prox);
    }
}

LInt parteameio(LInt *l){
    LInt *curr = l;
    int i = 0;
    LInt new = malloc(sizeof(struct lligada));
    while(i < (length(&l)/2)){
        new = *curr;
        curr = &((*curr) -> prox);
        i++;
    }

    new -> prox = NULL;
    return new;
}


int removeAll(LInt *l, int x){
    LInt *curr = l;
    int c = 0;
    while((*curr) != NULL){
        if((*curr) -> valor == x){
            LInt temp = *curr;
            (*curr) = (*curr) -> prox;
            free(temp);
            c++;
        }

        curr = &((*curr) -> prox);
    } return c;
}


int removeDups(LInt *l){
    int c = 0;

    while((*l) != NULL){
        LInt *curr = &((*l) -> prox);
        while(*curr != NULL){
            if((*curr) -> valor == (*l) -> valor){
                LInt temp = *curr;
                (*curr) = (*curr) -> prox;
                free(temp);
                temp = NULL;
                c++;
            } else curr = &((*curr) -> prox);
        }

        l = &((*l) -> prox);
    } return c;
}


int removeMaior(LInt *l){ //assumi uma lista nao ordenada
    LInt *curr = l;
    LInt  *maior = l;
    while((*curr) != NULL){
        if((*maior) -> valor < (*curr) -> valor) maior = curr; //esta versão é mais eficiente do que usar uma versão que usa uma auxiliar que percorre a lista para encontrar o maior valor de um nodo (complexidade quadrática)
                                                                // esta versão tem crescimento linear, no pior caso.
        curr = &((*curr) -> prox);
    }

    LInt temp = *maior;
    (*maior) = (*maior) -> prox;
    int val = temp -> valor;
    free(temp);
    return val;
}


void init(LInt *l){
    LInt *curr = l;

    while((*curr) -> prox != NULL){
        curr = &((*curr) -> prox);
    }

    LInt temp = *curr;
    (*curr) = (*curr) -> prox;
    free(temp);
    temp = NULL;
}


void append(LInt *l, int x){
    LInt *curr = l;
    LInt new = malloc(sizeof(struct lligada));
    new -> valor = x;

    while((*curr) != NULL){
        curr = &((*curr) -> prox);
    }

    new -> prox = NULL;
    (*curr) = new;
}

void concat(LInt *a, LInt *b){
    while((*a) -> prox != NULL) &((*a) -> prox);
    (*a) -> prox = *b;
}


LInt clone(LInt l){
    LInt curr = l;
    LInt new = malloc(sizeof(struct lligada));
    while(curr != NULL){
        new -> prox = malloc(sizeof(struct lligada));
        new -> valor = curr -> valor;
        new = new -> prox;
        curr = curr -> prox;
    }

    return new;
}


LInt cloneR(LInt l){ // acho que ta mal
    LInt new = malloc(sizeof(struct lligada));
    int i = length(l);
    int k = 0;
    while(k != i){
        new -> prox = malloc(sizeof(struct lligada));
        LInt curr = l;
        i = i - k;
        while(curr -> prox != NULL && i >= 0){
            curr = curr -> prox; i--;
        }
        new -> valor = curr -> valor;
        new = new -> prox; k++;
    }

    return new;
}


int maximo(LInt l){
    LInt curr = l;

    int max = 0;

    while(curr != NULL){
        if(max < curr -> valor) max = curr -> valor;
        curr = curr -> prox;
    }

    return max;
}

int take(LInt *l, int x){
    if(length(&l) <= x) return 0;

    LInt *curr = l;
    while((*curr) != NULL && x >= 0){
        curr = &((*curr) -> prox);
        x--;
    }

    while((*curr) != NULL){
        LInt temp = *curr;
        (*curr) = (*curr) -> prox;
        free(temp);
        temp = NULL;
    }

    return 1;
}

int drop(int n, LInt *l){
    LInt *curr = l;

    while((*curr) != NULL && n >= 0){
        LInt temp = *curr;
        (*curr) = (*curr) -> prox;
        free(temp);
        temp = NULL;
        n--;
    }

    return 1;
}

LInt nforward(LInt l, int n){
    LInt curr = l;

    for(; n >= 0; n--) curr = curr -> prox;

    LInt temp = curr; 
    curr = curr -> prox;
    return temp;
}

int listtoarr(LInt l, int v[], int N){
    int i = 0;

    for(; i < N; i++){
        v[i] = l -> valor;
        l = l -> prox;
    }

    return i + 1;
}

LInt arrtolist(int v[], int N){
    LInt l = malloc(sizeof(struct lligada));
    LInt curr  = l;
    curr -> valor = v[0];
    int i = 0;
    while(curr != NULL){
        i++;
        curr -> prox = malloc(sizeof(struct lligada));
        curr -> valor = v[i];
        curr = curr -> prox;
    }

    curr -> prox = NULL;
    return l;
}

LInt somasacl(LInt l){

    LInt new = malloc(sizeof(struct lligada));
    LInt curr = new;

    int acc = 0;
    while(curr != NULL){
        curr -> valor = acc + l -> valor;
        curr -> prox = malloc(sizeof(struct lligada));
        acc = curr -> valor;
        curr = curr -> prox;
        l = l -> prox;
    }
    curr -> valor = acc + l -> valor;
    curr -> prox = NULL;

    return new;
}


void remreps(LInt l){

    LInt curr;

    while(l){
        curr = l;
        curr = curr -> prox;
        while(curr != NULL){
            if(curr -> valor == l -> valor){
                LInt temp = curr;
                curr = curr -> prox;
                free(temp);
                temp = curr;
            } else curr = curr -> prox;
        }

        l = l -> prox;
    }
}


LInt rotatel(LInt l){
    if(length(l) == 1) return l;

    LInt curr = l;

    while(curr != NULL){
        curr = curr -> prox;
    }

    LInt temp = l;
    l -> prox = curr;
    curr -> prox = temp;
    
    return l;
}


LInt parte(LInt l){
    LInt curr = l;
    LInt new = malloc(sizeof(struct lligada));
    while(curr != NULL){
        if((curr -> valor % 2) == 2){
            new -> prox = malloc(sizeof(struct lligada));
            new -> valor = curr -> valor;
            new = curr;
            new = new -> prox;
            LInt temp = curr;
            curr = curr -> prox;
            free(temp);
            temp = curr;
        } else curr = curr -> prox;
    }


    return new;
}


typedef struct nodo{
    int valor;
    struct nodo *l, *r;
} *ABin;


int altura(ABin a){
    if(a == NULL) return 0;
    int nodosL = 0;
    int nodosR = 0;

    nodosL += altura(a -> l);
    nodosR += altura(a -> r);

    return (nodosL > nodosR ? nodosL : nodosR) + 1;
}


ABin clonea(ABin a){
    ABin new = malloc(sizeof(struct nodo));

    if(a == NULL) return NULL;

    new -> valor = a -> valor;
    new -> l = clonea(a -> l);
    new -> r = clonea(a -> r);
    return new;
}

void mirror(ABin *a){
    if(*a == NULL) return NULL;
    ABin temp = *a;
    temp -> valor = (*a) -> valor;
    temp -> l = (*a) -> r;
    temp -> r = (*a) -> l;
    mirror((*a) -> l);
    mirror((*a) -> r);
}

void inorder(ABin a, LInt *l){
    if(a == NULL) return;
    LInt *curr = l;
    inorder(a -> l, curr);
    (*curr) -> valor = a -> valor;
    (*curr) -> prox = malloc(sizeof(struct lligada));
    curr = &((*curr) -> prox);
    inorder(a -> r, curr);
}

void preorder(ABin a, LInt *l){
    if(a == NULL) return;
    LInt *curr =l;
    (*curr) -> prox = malloc(sizeof(struct lligada));
    (*curr) -> valor = a -> valor;
    curr = &((*curr) -> prox);
    preorder(a -> l, curr);
    preorder(a -> r, curr);
}

void posorder(ABin a, LInt *l){
    if(a == NULL) return;
    LInt *curr = l;
    posorder(a -> l, curr);
    posorder(a -> r, curr);
    (*curr) -> valor = a -> valor;
    (*curr) -> prox = malloc(sizeof(struct lligada));
    curr = &((*curr) -> prox);
}

int depth(ABin a, int x){
    int k = 0;
    if(a == NULL) return 0;
    if(a -> valor == x) return k;
    else if(a -> valor > x){ 
        depth(a -> l, x);
        k++;
    } else{ 
        depth(a -> r, x);
        k++;
    }
}

int freeab(ABin a){
    if(a == NULL) return 0;

    int nodosL = freeab(a -> l);

    if(a != NULL){
        free(a);
        a = NULL;
    }

    int nodosR = freeab(a -> r);

    return(nodosR + nodosL);
}


int pruneab(ABin *a, int l){
    if(a == NULL) return 0;

    if(l == 0){
        free(*a);
        *a = NULL;
    }

    int nodosL = pruneab(&((*a) -> l), l - 1);
    int nodosR = pruneab(&((*a) -> r), l - 1);

    return nodosL + nodosR;
}


int iguaisab(ABin a, ABin b){
    if(a == NULL || b == NULL) return 0;

    if(a -> valor == b -> valor && length(a) == length(b)) return 1;

    return (iguaisab(a -> l, b -> l) && iguaisab(a -> r, b -> r));
}


LInt nivelL (ABin t, int n){

    if (!t) return NULL;    

    LInt new = NULL;        
        
    if (n == 1) {                      
        new = malloc(sizeof(struct lligada));
        new -> valor = t -> valor;
        new -> prox = NULL;             
        return new;
    }

    LInt left = nivelL(t -> l, n - 1);   
    LInt rigth = nivelL(t -> r, n - 1);   
    if(!left && !rigth) return NULL;        
    else if(!left) new = rigth;            
    else {                                   
        new = left;
        while(left -> prox) left = left -> prox;
        left -> prox = rigth;
    }

    return new;
}

int nivelv(ABin a, int v[], int n){
    if(a == NULL) return 0;
    if(n == 1){
        v[0] = a -> valor;
        return 1;
    }
    int nodosL = nivelv(a -> l, v, n - 1);
    int nodosR = nivelv(a -> r, v + nodosL, n - 1); 
    return nodosL + nodosR;
}



ABin somasaca(ABin a){
    if(a == NULL) return NULL;

    ABin new = malloc(sizeof(struct nodo));
    new -> l = somasaca(a -> l);
    new -> r = somasaca(a -> r);

    new -> valor = a -> valor
                 + (new -> l != NULL ? new -> l -> valor : 0)
                 + (new -> r != NULL ? new -> r -> valor : 0);

    return new;
}

int contafolhas(ABin a){
    if(a == NULL) return 0;

    if(a -> l == NULL && a -> l == NULL) return 1;

    return(contafolhas(a -> l) + contafolhas(a -> r));
}

ABin cloneMirror(ABin a){
    if(a == NULL) return NULL;

    ABin new = malloc(sizeof(struct nodo));
    new -> valor = a -> valor;
    new -> l = cloneMirror(a -> r);
    new -> r = cloneMirror(a -> l);

    return new;
}

int addordRec(ABin *a, int x){
    if(!(*a)){
        ABin new = malloc(sizeof(struct nodo));
        new -> valor = x;
        new -> l = NULL;
        new -> r = NULL;
        return 1;
    }

    if((*a) -> valor > x) return addordRec(&((*a) -> l), x);
    else if((*a) -> valor < x) return addordRec(&((*a) -> r), x);
    else return 0;
}


int addordNaoRec(ABin *a, int x){
    while(*a){
        if((*a) -> valor > x) a = &((*a) -> l);
        else if((*a) -> valor < x) a = &((*a) -> r);
        else return 0;
    }

    ABin new = malloc(sizeof(struct nodo));
    new -> valor = x;
    new -> l = NULL;
    new -> r = NULL;
    *a = new;
    return 1;
}



int lookupab(ABin a, int x){
    if(a == NULL) return 0;
    while(a){
        if(a -> valor == x) return 1;
        else if(a -> valor > x) a = a -> l;
        else a = a -> r;
    }
return 0;
}

int lookupabRec(ABin a, int x){
    if(a == NULL) return 0;

    if(a -> valor == x) return 1;
    else if(a -> valor > x) return lookupabRec(a -> l, x);
    else return lookupabRec(a -> r, x);
}

int depthord(ABin a, int x){
    int level = 1;
    if(a == NULL) return 0;

    if(a -> valor == x) return level;
    else if(a -> valor < x) return level += depthord(a -> r, x);
    else return level += depthord(a -> l, x);
}

int maiorAB(ABin a){
    if(a == NULL) return -1;
    while(a -> r != NULL){
        a = a -> r;
    }
    return a -> valor;    
}


void removemaiorA(ABin *a){
    if((*a) == NULL) return;

    while((*a) -> r != NULL){
        a = &((*a) -> r);
    }

    ABin temp = *a;
    *a = (*a) -> l;   
    free(temp);
}

int quantosmaiores(ABin a, int x){
    if(a == NULL) return 0;

    int quantos = 0;

    if(a -> r == NULL) return quantos;

    if(x < a -> valor) return 1;
    
    return quantos += quantosmaiores(a -> r, x);
}

void listTbt(LInt l, ABin *a){
    if(a == NULL) return;

    if(!(*a)){
        ABin new = malloc(sizeof(struct nodo));
        new -> valor = l -> valor;
        new -> l = NULL; 
        new -> r = NULL;
        *a = new;
    }

    if(l -> valor > (*a) -> valor) listTbt(l, &((*a) -> l));
    else listTbt(l, &((*a) -> r));
}


int deprocura(ABin a){
    if(a == NULL) return 0;

    if(a -> l && a -> l -> valor < a -> r -> valor) return 1;
    if(a -> r && a -> r -> valor > a -> l -> valor) return 1;

    return (deprocura(a -> l) && deprocura(a -> r));
}


ABin criaArvore() {
    ABin a = newNodeT(5);
    a->l = newNodeT(3);
    a->r = newNodeT(8);

    a->l->l = newNodeT(1);
    a->r->r = newNodeT(4);

    a->r->r = newNodeT(10);

    return a;
}

void printABin(ABin a) {
    if (a == NULL) {
        printf(",");
        return;
    }

    printf("(%d ", a->valor);

    // Esquerda
    printABin(a->l);
    printf(" ");

    // Direita
    printABin(a->r);
    printf(")");
}

// Main para testar
int main() {
    ABin tree = criaArvore();
    ABin tree2 = criaArvore2();
    //ABin tree2 = cloneAB(tree);
    // LInt Ltree = NULL;
    // posorder(tree, &Ltree);

    LInt list = nivelL(tree, 6);
    printABin(tree);
    printf("\n");
    // printf("Iguais?: %d\n", iguaisAB(tree, tree2));
    // printABin(tree);
    imprimeL(list);
    printf("\n");
    //printABin(tree2);
    // imprimeL(Ltree);




    //printf("Size: %d\n", altura(tree));
}




















