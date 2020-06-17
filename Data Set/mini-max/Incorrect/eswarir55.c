#include<stdio.h>
int main()
{
    int arr[5],i,n,sum=0;
    int min=arr[0];
    int max=arr[0];
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    for(i=1;i<5;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
        if(arr[i] < min)
        {
            min=arr[i];
        }
    }
    
    printf("%d %d",sum-max,sum-min);

}
