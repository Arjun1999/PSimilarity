#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,i,s=0,a;
    scanf("%d",&n);
    while(n--)
        {
        scanf("%d",&a);
            s+=a;
    }
    printf("%d",s);
    return 0;
}
