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
    unsigned long long int ar[6];
    unsigned long long int sum=0,sum1=0,temp;
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    ar[4]=e;
    int i,j;
    
    for(i=0;i<=4;i++)
        {
        for(j=i+1;j<=4;j++)
            {
            if(ar[i]>ar[j])
                {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                
            }
        }
    }  j=4;
    
    for(i=0;i<4;i++)
        {
        sum=sum+ar[i];
          //printf("%lld  ",sum);
        sum1=sum1+ar[j];
        j--;
    }
   
     
    printf("%llu %llu",sum,sum1);
    return 0;
}
