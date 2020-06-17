#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,arr[5]; 
    long int b,min=0,max=0; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(int i=0;i<5;i++)
        {
        for(int j=i;j<5;j++)
            {
            if(arr[i]>arr[j])
                {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<4;i++) min+=arr[i];
    for(int j=5-1;j>=1;j--) max+=arr[j];
    printf("%ld %ld",min,max);
    return 0;
}
