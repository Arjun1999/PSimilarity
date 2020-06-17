#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int array[100], n, c, sum=0;
 
    scanf("%d", &n);
 
 
    for ( c = 0 ; c < n ; c++ ) 
        {
        scanf("%d", &array[c]);
        sum=array[c]+sum;
    }
    printf("%d", sum);
 
  
    return 0;
}
