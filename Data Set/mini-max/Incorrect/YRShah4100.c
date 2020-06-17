#include<stdio.h>

int main() 
{
    int i;
    int *arr = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++)
    {
       scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0],max_sum=0,min_sum=0;
    for(i=1 ; i<5 ; i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
        if(min > arr[i])
        {
            min=arr[i];
        }    
    }
    for(i=0 ; i<5 ;i++)
    {
    max_sum=max_sum+arr[i];
    min_sum=min_sum+arr[i];
    }
    printf("%d  %d",min_sum-max,max_sum-min);
    return 0;
}
