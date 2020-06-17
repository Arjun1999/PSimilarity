#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 int a[5];
 long int max,min,sum=0;
    for(int i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
        }
    max=a[0];
    min=a[0];
    sum=sum+a[0];
    for(int i=1;i<5;i++)
        {
        if(max<a[i])
            {
            max=a[i];
            }
        else if(min>a[i])
            min=a[i];
            sum=sum+a[i];
    }
    printf("%ld ",sum-max);
    printf("%ld",sum-min);
   return 0;
}
