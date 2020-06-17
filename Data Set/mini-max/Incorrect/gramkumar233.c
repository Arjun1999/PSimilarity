#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int result1,result2,result3,result4,result5;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    result1=arr[1]+arr[2]+arr[3]+arr[4];
    result2=arr[0]+arr[2]+arr[3]+arr[4];
    result3=arr[0]+arr[1]+arr[3]+arr[4];
    result4=arr[0]+arr[1]+arr[2]+arr[4];
    result5=arr[0]+arr[1]+arr[2]+arr[3];
        if(result1<result2,result1<result3,result1<result4,result1<result5)
    {
        printf("%d ",result1);
    }
    else if(result2<result1,result2<result3,result2<result4,result2<result5)
    {
        printf("%d ",result2);
    }
    else if(result3<result2,result3<result1,result3<result4,result3<result5)
    {
        printf("%d ",result3);
    }
    else if(result4<result2,result4<result3,result4<result1,result4<result5)
    {
        printf("%d ",result4);
    }
    else if(result5<result2,result5<result3,result5<result4,result5<result1)
    {
        printf("%d ",result5);
    }
    if(result1>result2,result1>result3,result1>result4,result1>result5)
    {
        printf("%d",result1);
    }
    else if(result2>result1,result2>result3,result2>result4,result2>result5)
    {
        printf("%d",result2);
    }
    else if(result3>result2,result3>result1,result3>result4,result3>result5)
    {
        printf("%d",result3);
    }
    else if(result4>result2,result4>result3,result4>result1,result4>result5)
    {
        printf("%d",result4);
    }
    else if(result5>result2,result5>result3,result5>result4,result5>result1)
    {
        printf("%d",result5);
    }
    return 0;
}
