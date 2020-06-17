#include "stdio.h"                                                                                                      
#include "string.h"
#include "math.h"
#include "stdlib.h"

int main()
{
    int t, i;
    scanf("%d", &t);
    int sum = 0;
    int num = 9;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
