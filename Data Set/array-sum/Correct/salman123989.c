#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int sum(int arr[],int N)
    {
    int add=0;
    for(int i=0;i<N;i++)
        add=add+arr[i];
    return add;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    int arr[MAX_SIZE];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",&arr[i]);
    printf("%d",sum(arr,N));
    return 0;
}
