#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include<stdio.h>

int main() {
    int n,i;
    int sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
	sum = sum + arr[i];
    }
	printf("%d\n",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
