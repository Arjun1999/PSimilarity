#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n=0,i=0,sum=0;
    int a[1001];
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d ",&a[i]);
        i++;
    }
    i=0;
    while(i<n)
    {
        sum=sum+a[i];
        i++;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
