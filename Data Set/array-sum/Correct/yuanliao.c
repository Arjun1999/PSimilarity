#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int input_number;
    int input_value;
    int i;
    int a[255];
    int sum=0;
    scanf("%d",&input_number);
    for (i=0;i<input_number;i++){
        scanf("%d",&input_value);
        a[i] = input_value;
        sum = sum+a[i];
    }
    printf("%d",sum);
    
    
    return 0;
}
