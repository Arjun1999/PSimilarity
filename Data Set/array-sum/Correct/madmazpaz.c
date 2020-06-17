#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size,i,*space,sum;
    scanf("%d",&size);
    sum = 0;

    space = malloc(sizeof(int)*size);

    for(i=0;i<size;i++)
    {
        scanf("%d",(space+i));
    }

    for(i=0;i<size;i++)
    {
        sum = sum+space[i];
    }

    printf("%d",sum);
    return 0;
}
