#include<stdlib.h>
#include<stdlib.h>

int main()
    {
    int a[6],n,i;
    int sum;
sum=0;
    printf("\n enter the value of numbers :");
    scanf("%d",&n);
     printf("enter the numbers :");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
sum=sum+a[i];
     }
      printf("\n the sum of the entered numbers is :%d",sum);


}
