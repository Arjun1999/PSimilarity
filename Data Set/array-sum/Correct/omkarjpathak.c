#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i=0,T=0;
    int num,sum;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&T);
    for (i=0;i<T;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
        
    printf("%d",sum);
    
    return 0;
}
