#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size,num,i,sum = 0;
    scanf("%d", &size);
    int arr[size];
    
    for(i = 0; i < size; i++){
        scanf("%d", &num);
        arr[i] = num;
        sum += arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
