#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum1(int *k,int l);
int main()
    {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    printf("%d",sum1(&a[0],n));
    return 0;
}
int sum1(int *x,int y)
    {
    int i,sum=0;
    for(i=0;i<y;i++)
        {
        sum=sum+(*x);
        x++;
    }
    return sum;
}