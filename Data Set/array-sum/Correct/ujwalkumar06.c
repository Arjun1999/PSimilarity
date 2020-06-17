#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num,sum=0,i,n;
    scanf("%d",&num);
    for(i=0;i<=num-1;i++)
        {
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
