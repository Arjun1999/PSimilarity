
#include <stdio.h>


int main() {

    int n,i,sum=0,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%d",&m);
        sum=sum+m;
         }
    printf("%d",sum);
    return 0;
}
