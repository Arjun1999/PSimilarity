#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int i,n,sum=0,a[1000],*ptr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    ptr=a;
    for(i=0;i<n;i++)
       {
        sum=sum+ *ptr;
        ptr++;   
        }
    printf("%d",sum);
    return 0;
}
