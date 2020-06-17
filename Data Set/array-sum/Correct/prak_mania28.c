#include <stdio.h>
#include <stdlib.h>

int main() {

    int i=0,n,s=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {   scanf("%d",&a);
        s+=a;
     }
    printf("%d\n",s);
    return 0;
}
