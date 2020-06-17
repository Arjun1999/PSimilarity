#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a[100],i, sum=0;
    printf("Enter the size of the array :  ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        {
            scanf("%d", a[i]);
    }
    for(i=0;i<n;i++);
    {
            sum+=a[i];
        
    }
    printf("%d", sum);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
