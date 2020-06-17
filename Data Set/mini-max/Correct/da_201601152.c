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
    long int k[5];
    k[0]=a;
    k[1]=b;
    k[2]=c;
    k[3]=d;
    k[4]=e;
    int i,j;
    long int temp;
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
                if(k[i]>k[j])
                    {
                    temp=k[i];
                    k[i]=k[j];
                    k[j]=temp;                    
                }
        }
    }
    double sum=a+b+c+d+e;
    double max=sum-k[0];
    double min=sum-k[4];
    printf("%.0lf %.0lf",min,max);
    return 0;
}
