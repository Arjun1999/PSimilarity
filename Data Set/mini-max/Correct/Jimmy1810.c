#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int d,s,temp,j,i; 
    long long int a[5];

    
    for(i=0;i<5;i++)
    {    scanf("%lld",&a[i]);}
      for(i=0;i<5;i++)
      {for(int j=0;j<5-i-1;j++)
      if(a[j]>a[j+1]) 
           {temp=a[j];
        a[j]=a[j+1];
         a[j+1]=temp;}}
    d=a[0]+a[1]+a[2]+a[3];
    s=a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld",d,s);
    return 0;
}
