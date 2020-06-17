
#include <stdio.h>




// Complete the miniMaxSum function below.
void miniMaxSum(int a[100], int n);




 main()
{
    int a[100],n;
    scanf("%d",&n);
    if( n>0 && n<100)
    {
        miniMaxSum(a,n);
    }
}
void miniMaxSum(int a[100], int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1=0,sum2=0;
    for(i=0;i<n-1;i++)
    {
        sum1=sum1+a[i];
    }
    printf("%d\t",sum1);
    for(i=1;i<n;i++)
    {
        sum2=sum2+a[i];
    }
    printf("%d",sum2);

}
