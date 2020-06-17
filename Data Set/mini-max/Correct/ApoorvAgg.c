#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    int i,j;
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
   long long int temp;
    for(i=0;i<5;i++)
       {
        for(j=4;j>=i;j--)
            {
            if(a[i]>a[j]) 
             {   temp=a[i];
            a[i]=a[j];
              a[j]=temp;}
        }
    }
   
  long  long int mina=0,maxa=0;
    for(i=0;i<4;i++) mina=mina + a[i];
    for(i=1;i<5;i++) maxa=maxa + a[i];
    
    printf("%lld %lld",mina,maxa);
    return 0;
}
