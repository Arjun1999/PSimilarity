#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long long int a[5],temp,min=0,max=0;
   // scanf("%d",&n);
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
    //scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                
            }
        }
    } 
    for(i=0;i<4;i++)
        min=min+a[i];
    for(i=4;i>0;i--)
        max=max+a[i];
    printf("%lld %lld",min,max);
    
    
    return 0;
}
