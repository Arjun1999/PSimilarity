#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int *a;
    int i , sum=0 , no;
    scanf("%d",&no);
    a=(int *)malloc(sizeof(a[no]));
    for(i=0;i<no;i++)
    { scanf("%d",&a[i]);
     sum+=a[i];}
    printf("%d",sum);
}
