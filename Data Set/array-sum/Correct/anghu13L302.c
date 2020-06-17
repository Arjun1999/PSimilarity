#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int no,i,sum=0;
    scanf("%d",&no);
    int a[no];
    for(i=0;i<no;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<no;i++)
        {
        sum=sum+a[i];
    }
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
