#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=0,i=0;
    int sum=0;
    int a[1000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&n);
    if(n>=1&&n<=1000)
    {    
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
            sum+=a[i];
        }
        
        printf("%d",sum);
        
        
    }
    return 0;
}
