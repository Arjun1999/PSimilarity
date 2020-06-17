#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,a,s=0;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d",&a);
        s=s+a;
    }
    printf("%d",s);
    return 0;
}
