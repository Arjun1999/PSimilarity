#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int arr[5],sum_final[5] ;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    long long int min=0, max=0;
    for (int k=0;k<5;k++){
long long int sum=0;
sum_final[k]=0;
for (int i=0;i<5;i++)
{

    sum=sum+arr[i];
}
    sum_final[k]=sum-arr[k];


    if (sum_final[k]>max){
        max=sum_final[k];}

}
min = sum_final[0];
for (int k=0;k<5;k++){      
    if (sum_final[k]<min)
    { 
        min=sum_final[k];}
}
 printf("%lld %lld\n", min,max);
    
   
    
    return 0;
}
