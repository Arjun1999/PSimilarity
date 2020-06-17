#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int a[1000],i,j=0,k;
    
    scanf("%d",&k);
    for(i=0;i<k;i++){
    scanf("%d",&a[i]);
        j=j+a[i];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    }
    printf("%d",j);
return 0;
}
