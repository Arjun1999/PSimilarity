#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d",&N);
    int i;
    int sum=0;
    int temp;
    for(i=0;i<N;i++)
        {
               scanf("%d",&temp);
               sum+=temp;
        }
    printf("%d",sum);
    return 0;
}
