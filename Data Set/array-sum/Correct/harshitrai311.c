#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,sum=0;
    scanf("%d",&n);
    int *a=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%d",sum);
free(a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
