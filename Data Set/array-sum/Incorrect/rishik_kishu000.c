#include<stdio.h>
int main()
{ int n; int a[200]; int sum=0;
     int i;
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}