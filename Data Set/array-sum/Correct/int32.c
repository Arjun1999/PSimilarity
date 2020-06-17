#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 1001
int array[N];

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i;
    int n;
    scanf("%d", &n);
    
    int temp;
    int sum=0;
    for(i=1;i<=n;i++)
    {
       scanf("%d", &temp);
       sum += temp;
    }
    
    printf("%d", sum);
    return 0;
}
