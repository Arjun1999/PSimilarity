#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,a,sum=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d",&a);
        sum=sum+a;
    }printf("%d",sum);
    return 0;
}
