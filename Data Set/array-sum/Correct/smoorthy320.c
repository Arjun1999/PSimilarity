#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int i,t,a,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d\t",&a);
        sum=sum+a;
    /*for(i=0;i<t;i++)
        {
        sum=sum+a[i];
        }*/}
    printf("%d",sum);
      
    return 0;
}
