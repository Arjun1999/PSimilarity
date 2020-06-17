#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    int sum=0,i;
    scanf("%d\n",&N);
    int a[N];
    for (i=1; i<= N ; i++)
        {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
