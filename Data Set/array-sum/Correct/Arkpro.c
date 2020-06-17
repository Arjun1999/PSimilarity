#include<stdio.h>

int main()
    {
    unsigned long int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        }
    printf("%lu",sum);
return 0;
}