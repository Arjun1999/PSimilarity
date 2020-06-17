#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int array[1000];
    int n;
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
        {
        sum=sum+array[i];
    }
    printf("%lld",sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
