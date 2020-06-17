#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,n,var,sum=0;
    scanf("%d",&n);
    int a[n];
    if(n>=1 && n<=1000)
        {
        for(i=0;i<=n-1;i++)
            {
            scanf("%d",&var);
        if(var>=0 && var<=1000)
            {
            a[i]=var;
            }
            
            sum=sum+a[i];
        }
            printf("%d",sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
