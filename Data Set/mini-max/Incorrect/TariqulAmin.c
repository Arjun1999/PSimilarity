#include<stdio.h>

int minsum(int x[])
{
    int i,sum=0;
    for(i=0;i<4;i++)
    {
        sum=sum+x[i];

    }
    return sum;

}
int maxsum(int x[])
{
    int i,sum=0;
    for(i=1;i<5;i++)
    {
        sum=sum+x[i];

    }
    return sum;

}

int main()
{
    int a[5];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);

    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }

    printf("\nAfter Sorting:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);

    }
    int sum1=minsum(a);
    int sum2=maxsum(a);

    printf("\n%d\n",sum1);
    printf("%d\n",sum2);

}

