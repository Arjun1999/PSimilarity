#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long min,max,i,flag1=0,flag2=0;
    long sum=0,sub=0;
    long *a = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&a[arr_i]);
    }
    min=max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        else if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=min||flag1==1)
        {
          
            sum=sum+a[i];
        }
        else
        {
            flag1=1;
        }
        if(a[i]!=max || flag2==1)
        {
            sub=sub+a[i];
        }
        else
        {
            flag2=1;
        }
    }
    printf("%ld ",sub);
    printf("%ld ",sum);
    return 0;
}
