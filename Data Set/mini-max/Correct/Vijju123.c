#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int arr[5];
   long int i,max,min,a,p;
    for (i=0;i<5;i++)
        {
        scanf ("%ld",&arr[i]);
        
    }
    max = arr[1] + arr[2] + arr[3] + arr[4];
    min = max;
    p= arr[1]+ arr[2]+ arr[3]+ arr[4]+ arr[0];
    a=p;
    for (i = 0;i<5;i++)
        {
        a= a- arr[i];
            if(a<min)
            min=a;
            if(a>max)
            max=a;
            a=p;
    }
    printf ("%ld %ld",min,max);
    return 0;
}
