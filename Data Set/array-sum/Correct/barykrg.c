#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 1000

int main() {
    int arr[SIZE],n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&arr[i]);
         s+=arr[i];
        }
    printf("%d",s);

                       /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
