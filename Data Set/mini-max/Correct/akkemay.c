#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int totala;
    long int totalb;
    long int totalc;
    long int totald;
    long int totale;
    
    totala=b+c+d+e;
    totalb=a+c+d+e;
    totalc=a+b+d+e;
    totald=a+b+c+e;
    totale=a+b+c+d;
    
    long int max;
    long int min;
    
    if(totala>totalb && totala>totalc && totala>totald && totala>totale){
        max=totala;
    }else if(totalb>totala && totalb>totalc && totalb>totald && totalb>totale){
        max=totalb;
    }else if(totalc>totala && totalc>totalb && totalc>totald && totalc>totale){
        max=totalc;
    }else if(totald>totala && totald>totalb && totald>totalc && totald>totale){
        max=totald;
    }else{
        max=totale;
    }
    
    if(totala<totalb && totala<totalc && totala<totald && totala<totale){
        min=totala;
    }else if(totalb<totala && totalb<totalc && totalb<totald && totalb<totale){
        min=totalb;
    }else if(totalc<totala && totalc<totalb && totalc<totald && totalc<totale){
        min=totalc;
    }else if(totald<totala && totald<totalb && totald<totalc && totald<totale){
        min=totald;
    }else{
        min=totale;
    }
    
    printf("%lld %lld",min, max);
    
    return 0;
}
