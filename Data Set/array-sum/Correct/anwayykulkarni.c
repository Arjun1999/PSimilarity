#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T,result=0,a;
    scanf("%d",&T);
        while(T--)
               {
            scanf("%d",&a);
            result=result+a;
        }
    printf("%d",result);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
