#include<stdio.h>
int main()
{
    int i,sum[100]={0},a[100],j=0,t;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;((i!=j)&&(j<5));j++)
        {
        sum[i]+=a[j];
            
        }
        
    }
    
    printf("%d",sum[0]);
    return 0;
}