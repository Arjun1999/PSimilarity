#include <stdio.h>
int main() {
   int i=0;
   int n,a[1000],sum=0;
   scanf("%d",&n);
    while(n--)
        {
       scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}
