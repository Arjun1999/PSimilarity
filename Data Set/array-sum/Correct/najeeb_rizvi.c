#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int getAndCalculateSum (int n);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int sum = 0;
    scanf("%d",&n);
    sum =  getAndCalculateSum(n);
    printf("%d",sum);
    return 0;
}

int getAndCalculateSum(int n){
    int i ;
    int sum = 0;
    int num;
    for(i = 0; i<n;i++){
        scanf("%d",&num);
        sum = sum+num;
    }
    return sum;
}
