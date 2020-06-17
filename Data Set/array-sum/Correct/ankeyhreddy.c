#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000];
    int N;
    int i;
    int sum=0;
    scanf("%d", &N);
    for(i=0;i<=N;i++)
        {
        scanf("%d", &a[i]);
    }
    for(i=0;i<=N;i++)
        {
        sum=sum + a[i];
    }
    printf("%d", sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
