#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t,i,num,sum=0;
  scanf("%d",&t);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    for ( i = 0;i < t; i++ ) {
    scanf("%d",&num);
    sum += num;
    }
    printf("%d\n",sum);
    return 0;
    
}
