#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    long int s[5];
    long int p[5];
    long int max;
    long int min;
    
    for(int i=0;i<5;i++)
    {
        scanf("%ld",&p[i]);
    }
    for(int i=0;i<5;i++)
    {
        s[i]=0;
       for(int j=0;j<5;j++)
       {
           if(i==j)
               continue;
           s[i]= s[i] + p[j];
       }
    }
    max=s[0];
    min=s[0];
    for(int i =0;i<5;i++)
    {
        if(max<s[i])
            max=s[i];
        else if(min>s[i])
            min = s[i];
    }
    printf("%ld",min);
    printf(" ");
    printf("%ld",max);
    
}
