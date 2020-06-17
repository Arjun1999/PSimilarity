#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,sum=0,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    return 0;
}
