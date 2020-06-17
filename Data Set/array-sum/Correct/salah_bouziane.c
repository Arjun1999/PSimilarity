#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,x,s;
    scanf("%d",&n);
    s = 0;
    for (i=0;i<n;i++)
        {
            scanf("%d",&x);
            s = s + x;
        }
    printf("%d",s);
    return 0;
}
