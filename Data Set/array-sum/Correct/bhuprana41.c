#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[1000];
    int num;
    int sum=0;
    int i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
        scanf("%d",&arr[i]);
    sum=sum+arr[i];
    
    }
    printf("%d", sum);
    return 0;
}
