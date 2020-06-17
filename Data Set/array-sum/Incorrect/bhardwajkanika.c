#include <stdio.h>
int main()
{
    int i,n,a[10],sum=0; 
   printf("Enter the size of array\t");
   scanf("%d",&n);
   printf("%d",n);
    printf("\nEnter the elements\t");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
    }
    
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
    printf("\nThe sum of elements is:%d\t",sum);
    return 0;
}    
    