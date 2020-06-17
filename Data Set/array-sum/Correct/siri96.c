#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,sum=0;
    int *ary;
    scanf("%d",&n);
    ary=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&ary[i]);
    for(i=0;i<n;i++)
        sum+=ary[i];
    printf("%d\n",sum);
    return 0;
}
