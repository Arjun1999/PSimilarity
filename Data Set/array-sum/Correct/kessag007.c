#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,a[1000],sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
         }
    for(i=1;i<=n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
     
    
    return 0;
}
