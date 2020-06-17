#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int narray[1000],n,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&narray[i]);
    for(i=0;i<n;i++)
        sum=sum+narray[i];
    printf("%d",sum);
    return 0;
}
