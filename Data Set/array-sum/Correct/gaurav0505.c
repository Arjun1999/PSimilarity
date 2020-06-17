#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
         int n,t=0,sum=0;
         scanf("%d",&n);
         int a[n];
         while(t<n){
             scanf("%d",&a[t]);
             sum=sum+a[t];
             t++;
         }
     printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
