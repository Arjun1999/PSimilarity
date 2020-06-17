#include <stdio.h>
int main() {
    int i,n,sum=0;
    int array[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n;i++)
       sum=sum+array[i];
    printf("%d",sum);
    return 0;
}