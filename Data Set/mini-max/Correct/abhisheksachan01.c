#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,b,c,d,e; 
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int arr[]={a,b,c,d,e};
    long long int sum=a+b+c+d+e;
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];arr[i]=arr[j];arr[j]=temp;
            }
        }
    }
    printf("%lld %lld",sum-arr[4], sum-arr[0]);
    return 0;
}