#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

    unsigned int sum = 0;
    
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   sum +=_ar[_ar_i]; 
}
    printf("%u\n",sum);
    return 0;
}
