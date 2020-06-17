#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],min,max,i,sum=0;
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
    min=a[0];
    for(i=1;i<5;i++)
    {if(a[i]<min)
        min=a[i];
    }
    //printf("%d\n",min);  
    max=a[0];
    for(i=1;i<5;i++)
    {if(a[i]>max)
        max=a[i];
    }
    //printf("%d\n",max); 
    for(i=0;i<5;i++)
        sum+=a[i];
   long long int x=sum-max;
    long long int y=sum-min;
    printf("%lld %lld",x,y);
    
    return 0;
}

