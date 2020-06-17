#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int t = 0;
    scanf("%d", &t);
    for(int i=0; i<t;i++)
    {
       int temp;
       scanf("%d", &temp);
       sum = sum + temp;
    }
    
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
