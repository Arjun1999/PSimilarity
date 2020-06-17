#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i = 0,j = 0,sum = 0;
    int k = 0;
    scanf("%d",&i);
    
    int* arr = (int*)malloc(sizeof(int) * i);
    
    for(j = 0;j<i;j++){
        scanf("%d",&k);
        sum += k;
    }
    
    printf("%d\n",sum);
    
    return 0;
}
