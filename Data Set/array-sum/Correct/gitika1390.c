#include<stdio.h>
int main()
    {
    int n,i,temp=0;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
         {
         temp=temp+a[i];
     }
    printf("%d",temp);
    return 0;
}