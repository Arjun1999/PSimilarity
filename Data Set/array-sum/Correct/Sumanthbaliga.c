#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[1000],n,i,b=0;
    
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
         b=b+a[i];
        }
    printf("%d",b);
    return 0;
}
