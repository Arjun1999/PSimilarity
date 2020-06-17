#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
int n;
int arr[n];
scanf("%d",&n);
scanf("\n");
for(int i =0;i<=n;i++)
{
    scanf("%d ",&arr[i]);
}



int p=0;
int sum=0;

for(int j=0;j<=n;j++)
{
    p = arr[j];
    sum = sum + p;
}

printf("%d",sum);

return 0;
}





