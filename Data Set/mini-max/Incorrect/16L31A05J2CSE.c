#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int min=0;
    for(int i=0;i<n;i++)
    {
        min+=arr[i];
    }
    printf("%d\n",min);
    int max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j!=i&&j<n;j++)
        {
            sum+=arr[j];
        }
        if(sum>max)
        {
            max=sum;
        }
        if(sum<min)
        {
            min=sum;
        }
    }
    printf("%d %d",min,max);
}
