#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int i,a[n],temp;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        temp=temp+a[i];
    }
    printf("%d",temp);
    return 0;
}
