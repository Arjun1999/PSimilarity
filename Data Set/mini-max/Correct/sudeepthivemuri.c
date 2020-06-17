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
    long int ar[5],t;
    ar[0]=b+c+d+e;
    ar[1]=a+c+d+e;
    ar[2]=a+b+d+e;
    ar[3]=a+b+c+e;
    ar[4]=a+b+c+d;
        for(int i=0;i<5;i++)
            {
            for(int j =i+1;j<5;j++)
                {if(ar[i]>ar[j])
                {
                    t=ar[i];
                    ar[i]=ar[j];
                    ar[j]=t;
                }}
        }
    
    printf("%ld %ld",ar[0],ar[4]);
    return 0;
}
