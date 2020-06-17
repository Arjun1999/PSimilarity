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
    long int e,temp;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[5];
    arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;arr[4]=e;
    int i,j,n=5;
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    long int minsum=0,maxsum=0;
    for(i=0;i<=3;i++)
        minsum+=arr[i];
    for(j=1;j<=4;j++)
        maxsum+=arr[j];
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
