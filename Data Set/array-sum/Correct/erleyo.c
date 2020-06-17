#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i;
    scanf("%d", &t);
    int num, sum = 0;
    for (i = 0; i < t; i++){
      scanf("%d",&num);
      sum += num;
    }
    printf("%d\n",sum);
    return 0;
}
