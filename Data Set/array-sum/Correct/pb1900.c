#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    long int sum=0;
    int a;
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%ld",sum);
    return 0;
}
