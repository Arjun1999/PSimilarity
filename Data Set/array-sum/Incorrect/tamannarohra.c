#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int simpleArraySum(int n, int ar[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+ar[i];
    return sum;
}
int main()
{
    int i,n,ar[100],s;
 //  printf("Enter number of elements");
    scanf("%d",&n);
 // printf("Enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    s=simpleArraySum(n,ar);
    printf("%d",s);
    return 0;
}
