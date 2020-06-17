#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int  *a, i, n, sum=0;
    scanf("%d",&n);
    //int a[10];
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
       scanf("%d ",&a[i]);
        sum=sum+a[i];      
    }
    printf("%d",sum);
        return 0;
}
