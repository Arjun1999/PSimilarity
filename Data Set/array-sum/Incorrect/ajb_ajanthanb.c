#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
        int i,len,sum=0;
        printf("Enter length of an array\n");
        scanf("%d",&len);
        int arr[len];
        for(i=0;i<len;i++)
        {
                printf("\nEnter arr[%d]  =  ",i);
                scanf("%d",arr+i);
        }
        for(i=0;i<len;i++)
                sum=sum+arr[i];
        printf("\nSum   =   %d \n\n",sum);
