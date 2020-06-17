#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 

    long int sum=0;
    for (int i =0;i<5;i++)
     {   scanf("%ld",&a[i]);
      sum+=a[i];
     }
        long int max_r=sum-a[0]; 
    long int min_r=sum-a[0]; 
    int i=1;
    for (;i<5;i++)
        {
        if (max_r<sum-a[i])
            max_r=sum-a[i];
           if (min_r>sum-a[i])
            min_r=sum-a[i]; 
    }
        printf ("%ld %ld",min_r,max_r);
    return 0;
}
