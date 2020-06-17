#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum=0,max,min;
    long int *a = malloc(sizeof(long int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&a[i]);
           sum=sum+a[i];
    }
    max=sum-a[0];
    min=sum-a[0];
     for(int i = 0; i < 5; i++){
       if(max<sum-a[i])
       {
           max=sum-a[i];
       }
     }
    for(int i=0;i<5;i++)
    {
        if(min>sum-a[i])
        {
            min=sum-a[i];
        }
    }
       printf("%li %li",min,max) ;   
         
     
    return 0;
}
