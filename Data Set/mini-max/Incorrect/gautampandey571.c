#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
         max=n+(n-1)+(n-2)+(n-3);
         min=(n-1)+(n-2)+(n-3)+(n-4);
        }
    printf("max =%d,min =%d",max,min);
    return 0;
}