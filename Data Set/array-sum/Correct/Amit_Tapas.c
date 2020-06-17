#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0; int test;
    int n;
    scanf("%d",&n);
    while(n--)
        {
       
        scanf("%d",&test);
        sum=sum+test;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
