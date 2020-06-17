#include<stdio.h>

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
        scanf("%d",a[i]);
    for(i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
            int  sum=a[i]+a[j];
            int max=0,min=0;
            if(max<sum)
                max=sum;
            if(min>sum)
                min=sum;

    }

    printf("%d %d",max,min);



    return 0;
}