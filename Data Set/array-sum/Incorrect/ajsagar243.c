#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int sum=0;
            int n;
            int a[n];
            printf("enter the size of the array\n");
            scanf("%d",&n);
    printf("enter the element of the array");
    for(int i=0;i<n;i++)
        {
        a[i]=scanf("%d",&a[i]);
            sum=sum+a[i];
    }
            printf("sum of the array element is %d",sum);
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
