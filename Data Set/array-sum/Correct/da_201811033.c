#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a[1000],ans=0 ,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        ans=ans+a[i];
    }
    printf("%d",ans);
    return 0;
}

