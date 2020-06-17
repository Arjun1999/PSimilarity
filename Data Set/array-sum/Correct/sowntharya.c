#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,sum,i;
    scanf("%d",&t);
    while(t--)
        {
           scanf("%d",&i);
            sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
