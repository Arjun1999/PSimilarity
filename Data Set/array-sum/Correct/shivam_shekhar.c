#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n,s=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a);
       s=a+s;
    }
    printf("%d",s);
    return 0;
}
