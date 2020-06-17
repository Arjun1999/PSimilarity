#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a[10];
    int sum=0;
    int i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("Enter n value");
    scanf("%d",&n);
    printf("Enter array values");
    for(i=0;i<n;i++){
           scanf("%d",&a[i]);
            sum=sum+a[i];
    }
    printf("The sum is %d",&sum);
    return 0;
}
