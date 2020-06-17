#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i=0,sum=0,a;
    scanf("%d",&n);
        while(i++<n)
        {
        scanf("%d",&a);
            sum+=a;
          //  printf("%d",sum);
    }
    printf("%d",sum);
    return 0;
}
