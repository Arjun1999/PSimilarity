#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,sum,i;
    scanf("%i", &size);
    int arr[size];
    for(i=0;i<size;i++)
        {
        scanf("%i",&arr[i]);
    }
    for(i=0;i<size;i++)
        {
        sum=sum+arr[i];
    }
    printf("%i\n",sum);
        
    return 0;
}
