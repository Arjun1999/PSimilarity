#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(long long int *xp,long long int *yp)
{
    long int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){
    long long int a[6],msum=0,lsum=0;
    int min,i,j; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
 
    for (i = 0; i < 4; i++)
    {
        min = i;
        for (j = i+1; j < 5; j++)
          if (a[j] < a[min])
            min = j;
        swap(&a[min], &a[i]);
    }
    for(i=1;i<5;i++){
        msum+=a[i];
    }
    for(i=0;i<4;i++){
        lsum+=a[i];
    }
    printf("%lld %lld",lsum,msum);
    return 0;
}
