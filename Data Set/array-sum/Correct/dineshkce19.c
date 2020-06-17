#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int sum=0,a;
    scanf("%d",&n);
while(n--)
    {
    scanf("%d",&a);
    sum+=a;
}
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
