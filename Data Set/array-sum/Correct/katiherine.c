#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0, numb = 0;
    scanf ("%d",&n);
   // int arr[n] = {0};
    int sum = 0;
    for (int i=0; i<n; i++)
       {
        scanf("%d", &numb);
        sum += numb;  
        }
    printf("%d",sum);
    return 0;
}
