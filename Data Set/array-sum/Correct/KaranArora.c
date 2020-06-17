#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,s=0,i=0;
    scanf("%d",&n);
    n=n-1;
    int sum[n];
      while(i<=n)
    {scanf("%d",&sum[i]);
          
        s=s+sum[i];  
     i++; 
    }
        printf("%d",s);
        
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
