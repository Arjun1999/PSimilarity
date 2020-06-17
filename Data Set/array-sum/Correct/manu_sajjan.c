#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n,x,s=0;
    scanf("%d",&n);
    
    while (n)
        {
        scanf("%d",&x);
        s+=x;
        n--;
    }
    printf("%d",s);
    return 0;
}
