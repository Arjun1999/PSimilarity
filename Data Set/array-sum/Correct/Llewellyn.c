#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&t);
        sum+=t;
        
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
