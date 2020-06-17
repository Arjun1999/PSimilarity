#include <stdio.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,sum=0,j;
    int ar[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d",&ar[i]);
       sum+=ar[i];


    }
    printf("%d",sum);
    return 0;
}

