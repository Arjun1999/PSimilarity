#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,s=0,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d\n",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
