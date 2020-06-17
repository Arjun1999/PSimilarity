#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int c[1000] ;
    int sum = 0;
    int i=0,n=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&c[i]);
    for(i=0;i<n;i++)
        sum=sum+ c[i];
    printf("%d",sum);
    return 0;
}
