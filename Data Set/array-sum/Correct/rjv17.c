#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int val;
    int len , sum=0;
    scanf("%d", &len);
    for(int i = 0; i< len ; i++)
    {
        scanf("%d",&val);
        sum = sum + val;
        
    }
    printf("%d", sum);
    return 0;
}
