#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t,sum=0,a;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d",&a);
        sum+=a;
        }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
