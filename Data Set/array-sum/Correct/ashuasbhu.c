#include <stdio.h>
int main()
{
    int arr[1000];
    int t,i;
    long int sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<t;i++)
        {
        sum+=arr[i];
    }
    printf("%ld",sum);
  
    return 0;
}
