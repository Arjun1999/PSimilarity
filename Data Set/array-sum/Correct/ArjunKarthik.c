#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int size;
    scanf("%d",&size);
    int arr,sum=0;
    int i;
    for(i=0;i<size;i++)
        {
        scanf("%d",&arr);
        sum=sum+arr;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
