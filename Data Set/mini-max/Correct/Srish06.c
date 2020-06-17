#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(long long int *a,long long int *b)
    {
    long long int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(long long int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
    
}
int main(){
    long long int a[5],min,max;
    int i;
    for(i=0;i<5;i++)
    scanf("%lld ",&a[i]);
    sort(a,5);
    min=a[0]+a[1]+a[2]+a[3];
    max=a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld",min,max);
    return 0;
}
