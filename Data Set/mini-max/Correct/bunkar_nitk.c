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
    long int min,max,sum;
    int i,j;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min=max=sum=0;
    long int arr[5]={a,b,c,d,e};
    for(i=0;i<5;i++)
        {
        sum=0;
        for(j=0;j<5;j++)
         {
            if(j==i)
                continue;
            else
                sum=sum+arr[j];
         }
        if(sum>max)
            max=sum;
        if(i==0)
            min=sum;
        else if(sum < min)
            min=sum;
        }
    printf("%ld %ld",min,max);
    return 0;
}
