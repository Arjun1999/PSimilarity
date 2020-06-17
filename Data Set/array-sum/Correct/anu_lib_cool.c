#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    scanf("%d", &N);
    int arr[N];
    int total=0;
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
        total+=arr[i];
    }
    printf("%d\n", total);
    return 0;
}
