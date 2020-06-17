#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a,b, total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&b);
        total+=b;
    }
    printf("%d",total);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

