#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,sum=0,i;
    int *ptr;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    for(i=0;i<n;i++)
        sum=sum+ptr[i];
    printf("%d",sum);
    return 0;
}
