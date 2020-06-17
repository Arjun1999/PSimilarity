#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],t,s1=0,s2=0,i,j; 
    for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
    
    for( i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(a[i]>a[j])
                {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                }
            }
            
        }
       for(i=0;i<4;i++)
           s1+=a[i];
        for(i=1;i<5;i++)
            s2+=a[i];
    printf("%ld %ld",s1,s2);
    
    return 0;
}
