#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,sum=0,i;
    int arr[1000];
    printf("\n\nEnter the no of elements\n");
scanf("%d",&n);
printf("Enter the elements");
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("\n %d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
