#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int*p;
    int sum=0;
    int n,i;
    scanf("%d",&n);
    
    p=(int*) malloc(n*2);
    for(i=0;i<n;i++)
        {
        scanf("%d",(p+i));
        
    }
    for(i=0;i<n;i++)
{
        sum= sum+*(p+i);
        
    }    
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
