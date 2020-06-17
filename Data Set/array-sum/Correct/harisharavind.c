#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a[1000],i,b=0;
   //printf("enter the numebr of values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    
        b=b+a[i];
}
printf("%d",b);
    return 0;
}
