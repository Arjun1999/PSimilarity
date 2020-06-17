#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5] , l , s ,sum=0; 
    
    for(int i=0; i<5 ; i++)
        {
            scanf("%ld" , &a[i]) ;
    }
    l=a[0];
    s=a[0];
    
    for(int i=0;i<5; i++)
    {
        sum+=a[i];
        if(a[i]>l)
            l=a[i] ;
        if(a[i]<s)
            s=a[i];
    }
    
    printf("%ld %ld" , sum-l , sum-s );
    
    return 0;
}
