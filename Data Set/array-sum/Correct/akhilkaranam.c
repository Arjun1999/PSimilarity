#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   long a[20000],n,i,count=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        
    }
    for(i=0;i<n;i++)
        {
        count=count+a[i];
    }
    printf("%ld",count);
}
