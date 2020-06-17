#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,num1,num2,sum=0,arr[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];    
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
