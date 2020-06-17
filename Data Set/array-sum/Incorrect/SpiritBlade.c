#include<stdio.h>
int main()
    {
    int n,i,sum=0;
    int arr[100];
    printf("Enter the vaue of n\n");
    scanf(" %d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        {
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
    printf("%d ",arr[i]);
    
}
   for(i=0;i<n;i++)
       {
       sum=sum+arr[i];
   }
    printf("the sum is = %d",sum);
    return 0;
}