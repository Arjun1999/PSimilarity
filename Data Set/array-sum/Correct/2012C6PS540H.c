#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,*b,i=0,sum=0;
    scanf("%d",&a);
    b=(int*)malloc(a*sizeof(int));
    for (i=0;i<a;i++)
        {
        scanf("%d",&b[i]);
        sum=sum+*(b+i);
        }
    printf("%d",sum);
    return 0;
}
