#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count = 0, i,sum=0;
    int arr[4000];
    
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
