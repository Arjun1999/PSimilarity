#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>#include<stdio.h>
int main(){
long long int temp,a[5],a1[2];
    int i,j;
for(i=0;i<5;i++)
scanf("%lld",&a[i]);
for(i=0;i<5;i++)
{
    for(j=0;j<5-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;   
        }
    }
}
    a1[0]=a[0]+a[1]+a[2]+a[3];
    a1[1]=a[4]+a[1]+a[2]+a[3];
for(i=0;i<2;i++){
    printf("%lld ",a1[i]);
}  
return 0;}
