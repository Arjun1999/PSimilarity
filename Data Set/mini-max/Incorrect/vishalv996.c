#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long int a[5],s=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    } 
    printf("%d %d",s-a[4],s-a[0]);
}
