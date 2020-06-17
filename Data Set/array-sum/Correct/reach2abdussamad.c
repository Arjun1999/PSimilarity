#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int add(int size){

    int arr[size];
    int i,sum=0;
    for(i=0;i<size;i++)
        {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
        {
        sum +=arr[i];
    }
    return sum;
}

int main() {

    int n,sum;
    scanf("%d",&n);
    sum = add(n);
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
