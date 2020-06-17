#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc,char ** argv)
{
    int n = 0;
    int *array = NULL;
    int sum = 0;
    int i = 0;
    /* scan number of elements */
    scanf("%d",&n);
    array = malloc(sizeof(int) *n);
    /* scan the elements and calculate sum while scanning for efficiency */
    for(i-0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum = sum+array[i];
    }
    printf("%d\n",sum);
    return 0;
}
