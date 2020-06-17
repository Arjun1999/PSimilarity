#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[7]={1,2,3,4,10,11};
    int i=0;
    int sum=0;
    for(i=0;i<7;i++)
    {
     sum =sum + arr[i];///////
    }
    printf("%d",sum);
}