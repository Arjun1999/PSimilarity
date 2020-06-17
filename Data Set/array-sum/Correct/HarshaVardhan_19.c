#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        {
    scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
        {
        count=count+a[i];
    }
    printf("%d",count);
}
