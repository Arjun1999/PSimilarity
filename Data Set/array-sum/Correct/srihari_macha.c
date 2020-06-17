#include <stdio.h>

int main() {

    int a[1000],i,n,x=0;
    //printf("enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            x=x+a[i];
        printf("%d",x);
    return 0;
}
