#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int t,a,i,sum=0;
    scanf("%i",&t);
    for(i=1;i<=t;i++)
        {
        scanf("%i",&a);
        sum=sum+a;
    }
    printf("%i",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
