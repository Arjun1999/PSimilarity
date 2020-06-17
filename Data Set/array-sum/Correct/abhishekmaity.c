#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,s=0,a[1000];
    scanf("%d",&n);
    int num=n;
    for(i=0;i<num;i++)
        {
        scanf("%d ",&a[i]);
        s+=a[i];
    }
printf("%d",s);
}
