#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int arr[1000],i,n,sum=0;
//printf("enter size of array");
scanf("%d",&n);
//printf("enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("%d",sum);   
    return 0;
}
