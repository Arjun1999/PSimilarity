#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    int i,s=0,a;
    for(i=0;i<n;i++)
        {
         scanf("%d",&a);
        s=s+a;
    }
    printf("%d",s);
    return 0;
}
