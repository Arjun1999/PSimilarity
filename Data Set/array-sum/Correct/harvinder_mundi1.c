#include<stdio.h>
int main()
    {
    int i,n,s=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}