#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    
    int sum=0;
    
    scanf("%d",&n);
    int val[n];
    for(int i=0; i<n; i++)
        {
            scanf("%d",&val[i]);
            sum = sum + val[i];
        }
    
    printf("%d", sum);    
    return 0;
}
