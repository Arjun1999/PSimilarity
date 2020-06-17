#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int no, i, sum=0;
    scanf("%d", &no);
    while(no--)
    {
        scanf("%d", &i);
        sum+= i;
    }
    printf("%d", sum);
    return 0;
}
