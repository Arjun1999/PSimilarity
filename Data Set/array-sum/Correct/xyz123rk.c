#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n;
    int sum=0;
   
    scanf("%d",&n);
   
    int i=0;
    int a[n];
    while(i<n)
    {
       scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<n)
        sum+=a[i++];
    printf("%d",sum);
    
   
    return 0;
}
