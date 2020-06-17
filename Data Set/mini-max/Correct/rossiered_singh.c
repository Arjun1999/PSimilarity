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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);

    long int array[5];
    array[0] = (long int) a;
    array[1] = (long int) b;
    array[2] = (long int) c;
    array[3] = (long int) d;
    array[4] = (long int) e;
    long int temp;
    int i; int j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           if(array[j] > array[j+1])
           {
            temp = (long int) array[j];
            array[j] = (long int) array[j+1];
            array[j+1] = (long int) temp;
           }
        }
    }

    long long int minsum=0; long long int maxsum=0;

    for(i=0;i<4;i++) {minsum += (long long int) array[i];}
    for(i=1;i<5;i++) {maxsum += (long long int) array[i];}
    printf("%lld ",minsum);
    printf("%lld",maxsum);
    return 0;
}