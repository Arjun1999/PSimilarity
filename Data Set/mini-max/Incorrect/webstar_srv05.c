#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main()
{
    int i,j ,k;
    int max , max2 , max3 , min , min2 , min3,finalval,finalval2;
    int arr[5];
   // printf("enter no");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
        int sum2 = arr[1]+arr[2]+arr[3]+arr[4];
        int sum3 = arr[2]+arr[3]+arr[4]+arr[0];
        int sum4 = arr[0]+arr[2]+arr[3]+arr[1];
        int sum5 = arr[0]+arr[1]+arr[3]+arr[4];
        int sum6 = arr[0]+arr[1]+arr[2]+arr[4];

        
        if(sum2<sum3){
            min=sum2;
        }
        else min=sum3;

        if(sum4<sum5){
            min2=sum4;
        }
        else min2=sum5;

        if(min<min2){
            min3=min;
        }
        else min3=min2;

        if(min3<sum6){
            finalval2=min3;
        }
        else finalval2 = sum6;
        printf(" %d",finalval2);

if(sum2>sum3){
            max=sum2;
        }
        else max=sum3;

        if(sum4>sum5){
            max2=sum4;
        }
        else max2=sum5;

        if(max>max2){
            max3=max;
        }
        else max3=max2;

        if(max3>sum6){
            finalval=max3;
        }
        else finalval = sum6;

        printf("%d",finalval);
}