#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,sum=0,a;
    scanf("%d",&n);
    while(n>0)
        {scanf("%d",&a);
        sum=sum+a;
        n--;}
    printf("%d",sum);
    return 0;
}
