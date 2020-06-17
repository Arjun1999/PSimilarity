int sum( int a[]);
#include <stdio.h>
int sum(int a[] )
{
    int i,y=0;
    for (i=1;i<=6;i++)
    {
        y=y+a[i];
    }
    return y;
    
}
int main()
{
    int i,ar_sum;
    int a[6]={1,2,3,4,10,11};
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }
    ar_sum=sum(a);
    printf("the sum is:%d",ar_sum);
    return 0;
    
}


