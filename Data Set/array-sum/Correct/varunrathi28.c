#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int i,sum=0,n;
    int a[30000];

    scanf("%d\n",&n);

    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
