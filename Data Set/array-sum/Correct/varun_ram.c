#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int N;
    int total=0;
    int i;
    scanf("%d",&N);
    int arr[N];
    while(N<=1000 && i<N && N>=1)
        {
        scanf("%d",&arr[i]);
        total+=arr[i];
        i++;
    }
    printf("%d",total);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
