 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(;i<n;i++)
        {
            scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
