#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(long int *m,long int *n)
{
    long int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e,min=0,max=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    //insert into arrays
    long int a1[5];
    a1[0]=a;
    a1[1]=b;
    a1[2]=c;
    a1[3]=d;
    a1[4]=e;
    
    
    // sorting he array
    for(int i=0;i<5;i++)
        {
        for(int j=i+1;j<5;j++)
            {
            if(a1[i]>a1[j])
                swap(&a1[i],&a1[j]);
        }
    }
    for(int i=0;i<4;i++)
        {
        min=min+a1[i];
    }
    for(int i=1;i<5;i++)
        {
        max=max+a1[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
