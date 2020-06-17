#include<stdio.h>
#define maxsize 1000

int simpleArraySum(int arr[])
{
    int i,sum;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;

}

int main()
{
    int n,arr[1000];
    
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    printf("%d",simpleArraySum(arr[]));
}
