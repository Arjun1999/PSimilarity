#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N,temp = 0;
    int a[1000];
    scanf("%d\n",&N);
    for(int i=0; i<N;i++)
    {scanf("%d\t",&a[i]);
     temp = temp + a[i]; 
    }
    printf("%d",temp);
    return 0;
}
