#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    long int ar[100];
    int a,b,i,sum=0;
    //printf("in how many values you want sum");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        //printf("\nenter value : ");
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
printf("%d",sum);    
    return 0;
}
