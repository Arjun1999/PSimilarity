#include <stdio.h>
#include <string.h>
int n;
void main()
{
    int i=0,sum=0;
    printf("enter the no of elements",n);
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
       }
    while(i<n)
       {
          sum=sum+a[i];
          i++;
       }
    printf("sum of elements="%d",sum);
    return 0;
}
