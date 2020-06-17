#include <stdio.h>
int main()
    {
    int n,a[1000],i;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        count=count+a[i];
    }
    printf("%d",count);
    return 0;
}
