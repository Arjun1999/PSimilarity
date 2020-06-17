#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int result=0,resultmain=0,i,j,b=0,a=0;
    int *arr = malloc(sizeof(int) * 5);
    for(i = 0; i< 5;i++){
       scanf("%d",&arr[i]); 
    }
    for(j=1;j<=5;j++)
    {
    for(i=0;i<5;i++)
    {
        result=result+arr[i];
        resultmain=result-j;
    }
        if(resultmain>b)
            b=resultmain;
        if(resultmain-a>0)
            a=resultmain;
        //sum=sum+result;
    }
    printf("%d %d",b,a);
    return 0;
}
