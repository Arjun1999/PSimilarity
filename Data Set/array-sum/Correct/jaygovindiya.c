#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,c=0,i,*m,a;
    scanf("%d",&n);
    m=(int *)malloc(n * sizeof(int));
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a);
    c=c+a;
    a++;
    }
    printf("%d",c);
    return 0;
}
