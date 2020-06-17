#include <stdio.h>
int main() 
{
int t,a[10000],i,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&a[i]);
    c=c+a[i];
    }
    printf("%d",c);
    return 0;
}
