#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int max=0,b1[5];
    long int a1[5];
    for(int i=0;i<5;i++)
        scanf("%ld",&a1[i]);
    for(int i=0;i<5;i++)  
    { int k=0;
     b1[i]=0;
        for(int j=0;j<5;j++)
            {
              b1[i]=b1[i]+a1[j+i];
            k++;
            if(k==4)
                break;
            else if((j+i)==4)
                j=(-i-1);
    }
    }
    long int min=b1[0];
     for(int i=0;i<5;i++)
         {
         if(min>b1[i])
             min=b1[i];
         else if(max<b1[i])
             max=b1[i];
     }
     printf("%ld %ld",min,max);
    return 0;
}
