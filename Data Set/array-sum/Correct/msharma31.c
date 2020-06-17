#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,sum=0,m;
    scanf("%d",&n);
    while(n--)
        {
        scanf("%d",&m);
        sum+=m;
    }
    printf("%d\n",sum);
    return 0;
}
