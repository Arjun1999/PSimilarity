#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *a,n,i,sum=0;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%d \n",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
