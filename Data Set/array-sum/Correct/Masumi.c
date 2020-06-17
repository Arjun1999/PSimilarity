#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int iNum=0,num=0;
    int iSum=0;
    int i=0;
    scanf("%d",&iNum);
    
    for(i=0;i<iNum;i++)
       {
        scanf("%d",&num);
        iSum+=num;
    }
    printf("%d",iSum);
    return 0;
}
