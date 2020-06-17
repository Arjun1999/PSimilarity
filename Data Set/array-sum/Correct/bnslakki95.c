#include <stdio.h>
int main()
    {
    int n,i,arr[1000],d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        d=d+arr[i];
    }
        printf("%d",d);
    return 0;
}
