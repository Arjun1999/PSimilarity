#include<stdio.h>
int main()
{
    int min=99999,max=-9999,i,n,arr[10];
    int sum=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++)
    {
    for(i=0;i<n;i++)
    {
        if(count==i)
        {
            continue;
        }
        else
        {
        sum = sum+arr[i];
        if(sum>max)
            max=sum;
        if(sum<min)
            min=sum;
        }
    }
    count++;
    }
    printf("%d %d",max,min);



    return 0;
}
