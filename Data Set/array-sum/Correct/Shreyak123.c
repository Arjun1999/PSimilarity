#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
        {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int j=0;j<a;j++)
        {
    c=c+arr[j];

    }
    printf("%d",c);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
