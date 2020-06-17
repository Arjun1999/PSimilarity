#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
//printf("how many elements you want to enter");
    int no;
    int sum=0;
    scanf("%d\n",&no);
    int a[no];
    for(int i=0;i<no;i++)
        {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<no;i++)
        {
        sum=sum+a[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
