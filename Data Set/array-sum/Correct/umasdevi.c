#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num[1000],tot_num,i,sum=0;
    scanf("%d",&tot_num);
    for(i=0;i<tot_num;i++)
        {
         scanf("%d",&num[i]);
         sum = sum + num[i];
    }
    printf("%d",sum);
    return 0;
}
