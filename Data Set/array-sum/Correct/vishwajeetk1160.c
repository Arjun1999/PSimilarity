#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,sum=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]); 
    sum=sum+x[i];
   }
   printf("%d", sum);
}
