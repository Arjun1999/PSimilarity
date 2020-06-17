#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
int arr[100];
int a=5,i,n;
    int sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);  
}
switch(5)
{
    case 1:
       sum=arr[1]+arr[2]+arr[3]+arr[4];
        printf("%d",sum);
        break;
    case 2:
       sum=arr[0]+arr[2]+arr[3]+arr[4];
        printf("%d",sum);
        break;
    case 3:
         sum=arr[0]+arr[1]+arr[3]+arr[4];
                printf("%d",sum);
        break;
    case 4:
        sum=arr[0]+arr[1]+arr[2]+arr[4];
        printf("%d",sum);
        break;
    case 5:
       sum=arr[0]+arr[1]+arr[2]+arr[3];
        printf("%d",sum);
        break;
        
        
        
}

{    return 0;
}
}