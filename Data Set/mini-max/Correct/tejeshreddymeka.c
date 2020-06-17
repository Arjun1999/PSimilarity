#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main(){
    int j,i;
    long long int a; 
    long long int b,arr[5]; 
    long long int c,temp; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;arr[4]=e;
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("%lld %lld",arr[0]+arr[1]+arr[2]+arr[3],arr[1]+arr[2]+arr[3]+arr[4]);
    return 0;
}
