#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int i, l,a,sum=0;
   scanf("%d",&l);
    for(i=0;i<l;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}
