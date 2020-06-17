#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100],n,sum=0;
    scanf("%d",&n);
    if(n>100)
    {
        printf("overflow\n");
        exit(0);
    }
    if(n<0)
    {
        printf("negative\n");
        exit(0);
    }
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
}