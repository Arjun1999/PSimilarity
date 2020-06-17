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
    long int A[5],temp;
    long long int s1,s2;
    A[0]=a,A[1]=b,A[2]=c,A[3]=d,A[4]=e;
    int i,j;
    for(i=0;i<5;i++){
     for(j=i+1;j<5;j++){
         if(A[i]>A[j])
             {
             temp=A[i];
             A[i]=A[j];
             A[j]=temp;
         }
     }
    }
   for(i=0;i<4;i++)s1=s1+A[i];
    for(j=1;j<5;j++)s2=s2+A[j];
    printf("%lld %lld",s1,s2);
    return 0;
}
