
#include <stdio.h>

int main()
{
    int a[10],i,n;
     
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    int sum=0;
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("%d",sum);
    return 0;
}

