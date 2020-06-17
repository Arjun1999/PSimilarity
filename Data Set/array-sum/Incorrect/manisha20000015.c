#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,n=6,sum=0;
    int a[6]={1,2,3,4,10,11};
    for(i=0;i<n;i++)
{
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
