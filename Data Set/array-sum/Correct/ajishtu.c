#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int sum=0,i,no,a[no];
    scanf("%d",&no);
    for(i=1; i<=no; i++)
        {
        scanf("%d",&a[no]);
        sum=sum+a[no];
    }
    printf("%d",sum);
    return 0;
}
