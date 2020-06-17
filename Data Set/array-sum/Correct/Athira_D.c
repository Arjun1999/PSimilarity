#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,s=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&k);
        s+=k;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("%d",s);
    return 0;
}
