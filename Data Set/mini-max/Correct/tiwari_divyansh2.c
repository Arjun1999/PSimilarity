#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int max=0;
    long int min=0;
    long int a[5];
    long int p[5];
    int i;
    for(i=0;i<5;i++)
        {scanf("%ld",&a[i]);}
    p[0]=a[0]+a[1]+a[2]+a[3];
    p[1]=a[1]+a[2]+a[3]+a[4];
    p[2]=a[2]+a[3]+a[4]+a[0];
    p[3]=a[3]+a[4]+a[0]+a[1];
    p[4]=a[4]+a[0]+a[1]+a[2];
     max=p[0];
      min=p[0]; 
    for(i=0;i<5;i++)
        {
       if(p[i]>max)
            max=p[i];
           if(p[i]<min)
            min=p[i];
    }
        printf("%ld",min);
        printf("\t%ld",max);
        
    
    
    
    return 0;
}
