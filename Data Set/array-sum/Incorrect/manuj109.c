#include<stdio.h>

int main()
   {
    int arr[80],i,n,sum=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        {
           sum=sum+arr[i];
    }
    printf("Sum is=%d",sum);
    
    return 0;
}