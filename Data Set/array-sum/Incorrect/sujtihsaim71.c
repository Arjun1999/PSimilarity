#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       s=s+a[i]; 
    }
    printf("%d",s);
    return 0;
}