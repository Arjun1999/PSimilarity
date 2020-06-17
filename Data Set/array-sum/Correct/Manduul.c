#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void length(int a);

int main() {
    int c;
    scanf("%d", &c);
    length(c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
void length(int a) {
    int b = 0;
    int array[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &array[i]);
        b += array[i];
    }
   printf("%d", b);
}