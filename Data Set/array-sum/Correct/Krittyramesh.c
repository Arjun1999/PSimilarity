#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,b[1000],sum=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
        {
        scanf("%d",&b[i]);
        sum=sum+b[i];        
        }
    printf("%d",sum);
    return 0;
}
