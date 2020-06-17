#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],i,temp;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        temp=temp+a[i];
        
    }
   
        printf("%d",temp);
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
