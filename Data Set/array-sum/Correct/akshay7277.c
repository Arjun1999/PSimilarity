#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,sum=0;
    scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++){
        scanf("%d",&c[i]);
        sum=sum+c[i];
    }
     printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
