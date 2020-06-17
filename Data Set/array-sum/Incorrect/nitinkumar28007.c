#include<stdio.h>
int main()
{
    int n,a[6],i,temp;
    temp = 0;
    
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
        
        scanf("%d",&a[i]);
        temp = a[i] + temp;
    }
    printf("%d",temp);
    return 0;
}