#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    
    int arr[1000];
    int i = 0;
    int sum = 0;
    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=00;i<n;i++)
        sum = sum + arr[i];
    printf("%d",sum);   
    return 0;
}
