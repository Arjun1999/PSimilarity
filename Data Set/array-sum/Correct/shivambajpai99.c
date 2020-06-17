#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        {scanf("%d",&arr[i]);
       }
    int sum=0;
   for(j=0;j<n;j++)
       { sum =  sum + arr[j] ;}
    printf("%d",sum);
    return 0;
}
