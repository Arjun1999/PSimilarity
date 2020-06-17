#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, arr[1000],sum=0;
    scanf("%d",&n);
    if(n<=1000 && n>=1)
        {
    while(n){
        scanf("%d",&arr[n]);
        
        sum+=arr[n];
        n--;
    }
    }
    else
        printf("invald range of array !");
    printf("%d",sum);
    return 0;
}
