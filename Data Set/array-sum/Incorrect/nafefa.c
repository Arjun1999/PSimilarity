#include<stdio.h>
void main()
{
    int n,i,a[15],sum=0;
    printf("Enter the array size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum=a[i];
    }
    printf("Sum of array elements : %d",sum);
}
