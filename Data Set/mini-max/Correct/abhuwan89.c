#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int ar[5];
    long long int sum=0;
    int i,j;
     long int smallest,largest;
    smallest=1000000000;
        largest=0;   
   
    for(i=0;i<5;i++)
        {
        scanf("%ld",&ar[i]);
        if(ar[i]<smallest)
            smallest=ar[i];
        if(ar[i]>largest)
            largest=ar[i];
        sum=sum+ar[i];
        }
    printf("%lld %lld",sum-largest,sum-smallest);
    return 0;
}
