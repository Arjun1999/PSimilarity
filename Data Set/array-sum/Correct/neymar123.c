#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum,a;
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
