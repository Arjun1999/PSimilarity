#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    long int a[i],S,B,T=0,max,min;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    B=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]>B)
            B=a[i];
    }
    
    S=a[0];
    for(i=0;i<5;i++)
        {if(a[i]<S)
      S=a[i] ;  }
           
    for(i=0;i<5;i++)
        {
        T=T+a[i];
    }
   
    min=T-B;
    printf("%ld ",min);
     max=T-S;
    printf("%ld",max);
    return 0;
}
