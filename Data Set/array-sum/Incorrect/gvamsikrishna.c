#include<stdio.h>
int main()
{
int sum=0,i,size,array[1000];
    scanf("%d",&size);
    for(i=0;i<=size;i++)
    {
    scanf("%d",&array[i]);
    }
    for(i=size;i>=0;i--)
    {
        sum+=array[i];
    }
    printf("%d",sum);
    
    
    return 0;
}

    
    
    
    