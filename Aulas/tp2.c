#include <stdio.h> 
#include <math.h>


float multInt (int n, float m) {
      float r = 0;
      for (int i = 0; i < n; i ++) {
        r += m;
      } return r;
      
}

float multInt2 (int n, float m) {
    float oddIndexsum = 0;
    
    for (int i = 1; n > 0; n /= 2, i ++){
        if (n % 2 != 0){
            oddIndexsum += m;
            m *= 2;



    }
 }
}


int mdc1 (int a,int b){
    int gt, lt, mdc;
    if (a > b){
        gt = a; 
        lt = b;
    } else {
        gt = b;
        lt = a;
    }

    for (int i = 1; i <= lt; i ++){
        if (lt % i == 0 && gt % i == 0) {
            mdc = i;
            
            
        } 
        }
    }



int mdc2(int a, int b){
    int gt, lt;
    if (a > b){
         gt = a;
         lt = b;
         


    } else {
        lt = a;
        gt = b;
    
    }

    while (lt != 0){
             int dif = gt - lt;
             gt = lt; 
             lt = dif;
             
    }
     return gt;

    
}




int mdc3(int a, int b){
    int gt, lt;
    if (a > b){
         gt = a;
         lt = b;
         


    } else {
        lt = a;
        gt = b;
    
    }

    while (lt != 0){
             int dif = gt % lt;
             gt = lt; 
             lt = dif;
             
    }
     return lt;

    
}

int fib1 (int n){
    if (n == 0 || n == 1){
        return 1;
    }

   return fib1 (n-1) + fib1 (n-2);
}


int fib2 (int n){
    if (n == 0 || n == 1) return 1;

    int var1, var2, resp;

    for (int i = 2; i <= n; i ++){
        var1 = i;
        var2 = i + 1; 
        resp = var2; 

    } return resp;
}