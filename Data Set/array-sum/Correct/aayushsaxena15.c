#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,a,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        s+=a;
    }
    printf("%d\n",s);
    return 0;
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
}
