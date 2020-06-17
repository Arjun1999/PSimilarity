#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j,temp;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int m[5];
    long int min=0;
    long int max=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    m[0]=a;m[1]=b;m[2]=c;m[3]=d;m[4]=e;
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(m[i]>m[j])
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
    for(i=0;i<4;i++)
        min+=m[i];
    for(i=1;i<5;i++)
        max+=m[i];
    printf("%ld %ld",min,max);
    return 0;
}
