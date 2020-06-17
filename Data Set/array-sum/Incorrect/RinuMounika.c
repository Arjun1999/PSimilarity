#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i=0,n=0,sum=0;
    int a[100];
    scanf("%d\n",&n);
     for(i=0;i<n;i++)
       scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%d",sum);
    return 0;
}
