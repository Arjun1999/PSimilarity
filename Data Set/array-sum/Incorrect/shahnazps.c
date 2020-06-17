#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,n,sum=0,a[' '];
    printf("\nEnter the elements in an array");
    scanf("%d"&n);
    printf("\n Enter the array elements\n")
    for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
          sum=sum+a[i];
        }
    printf("the sum of the elements in an array %d",sum);
    return 0;
}
