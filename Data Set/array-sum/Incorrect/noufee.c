#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i;
     int sum=0;
     int a[100];
     printf("Enter an integer: \n");
     scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    
    for(i=0;i<n;i++)
        sum=sum+a[i];
    
    printf("\n The sum of the number is: %d",sum);
    
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
