#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,m,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
         scanf("%d",&m);
            sum=sum+m;
    }
    
    printf("%d",sum);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
