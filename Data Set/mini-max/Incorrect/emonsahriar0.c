#include<stdio.h>
int main()
{
    int arr[5],i=0,min=arr[0],max=arr[0];
    long int sum=0;
    
    while(i<5)
    {
        scanf("%d",&arr[i]);
        
        if(min>arr[i])
            min=arr[i];
        
        else
            max=arr[i];
        
        sum+=arr[i];
        
        i++;
    }
    printf("%d %d\n",sum-max,sum-min);
    
    return 0;
}
