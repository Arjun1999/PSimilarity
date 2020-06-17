#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int sum = 0;
    
    scanf("%d", &n);
    for(; n > 0; --n) {
      int t;
      scanf("%d", &t);
      sum += t;
    }
  
    printf("%d", sum);
    return 0;
}
