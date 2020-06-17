#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int s=0,s1=0,s2=0,k;
    int *arr = malloc(sizeof(int) * 5);
    long int p[sizeof(*arr)]={0};
        
    for(int arr_i=0;arr_i < 5;arr_i++)
    {
       scanf("%ld",&p[arr_i]);
        s+=p[arr_i];
            
    }
     
    s1=s2=p[1];
   
     for(int i=0;i<5;i++)
        {  
         if(p[i]>s1){s1=p[i];}
         if(p[i]<s2){s2=p[i];}
         
     }
           
         printf("%ld %ld",s-s1,s-s2);
           
    return 0;
}
