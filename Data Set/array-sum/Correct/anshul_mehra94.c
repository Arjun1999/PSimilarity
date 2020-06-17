#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,a,t,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
