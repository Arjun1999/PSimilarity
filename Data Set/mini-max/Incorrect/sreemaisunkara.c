#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],great,small;

    printf("enter the size of an array");
    scanf("%d",&n);
    for(i = 0;i <= n;i++)
    scanf("%d",&a[10]);
    great = a[0];
    small = a[0];
    for(i = 1;i <= n;i++)
    {
        if(great < a[i])
        {
            great = a[i];
        }
    }
    for(i = 1;i <= n;i++)
    {
        if(small > a[i])
        {
            small = a[i];
        }
    }
     for(i = 0;i <= n;i++)
    {
        sum = sum+a[i];
    }
    s1 = sum - great;
    s2 = sum - small;
    printf("%d\t%d",s1,s2);



}

