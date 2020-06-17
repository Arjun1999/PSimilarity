#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int x,i,j,s=0,y,p=0;
   long int a[5];
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(a[i]>a[j])
                {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                }
            }
    }
        for(i=0;i<4;i++)
        s=s+a[i];
        
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(a[i]<a[j])
                {
                y=a[i];
                a[i]=a[j];
                a[j]=y;
            }
        }
    }
        for(i=0;i<4;i++)
        p=p+a[i];
    
    printf("%ld %ld",s,p);
    
    return 0;
}
