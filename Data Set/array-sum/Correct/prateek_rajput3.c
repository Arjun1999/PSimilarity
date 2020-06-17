#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,res=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        res+=a[i];
    }
    printf("%d",res);
    return 0;
}
