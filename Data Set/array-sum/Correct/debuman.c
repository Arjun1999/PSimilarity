#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, a[1000], i=0, sum=0;
    scanf("%d",&n);
    while(i<n)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            i++;
        }  
    printf("%d",sum);
    return 0;
}
