#include<stdio.h>

int main()
{
    int i, n, arr[100],sum=0;
    printf("enter the array length");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        sum+= arr[i];
    }
    printf("the sum of the array is %d",sum);

return 0;
}
