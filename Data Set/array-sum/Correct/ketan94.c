#include<stdio.h>
int main()
{
    
    int size;
    scanf("%d",&size);
    int arr[size];
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        
        
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    
    printf("%d\n",sum);
    
    
    
    return 0;
}