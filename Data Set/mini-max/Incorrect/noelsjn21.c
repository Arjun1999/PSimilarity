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
    
    long int arr[5] = {a,b,c,d,e};
    int n=5;
    int i=0,j=0,sub=0;
    int sum[5];
    memset(sum,0,5);
    
    while(i<n){
        j=0;
        sub=i;
        while(j<(n-1)){
            if(sub>4)sub-=5;
            sum[i]+=arr[sub];
            j++;sub++;
        }
    }
    for(int i=0;i<n;i++)printf("%ld ",sum[i]);
    return 0;
}
