#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1,num2;
    scanf("%d\n", &num1);
    int i,sum;
    sum=0;
    for(i=0;i<num1;i++){
        scanf("%d",&num2);
        sum = sum +num2;
    }
    printf("%d",sum);
    return 0;
}
