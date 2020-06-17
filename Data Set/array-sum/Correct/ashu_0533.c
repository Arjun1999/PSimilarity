#include <stdio.h>
#include <stdlib.h>

int main() {

    int *arrNum, test;
    int i, sum =0;
    scanf("%d", &test);
    arrNum = (int*)malloc(test*sizeof(int));
    for(i = 0; i<test; i++)
     {
        scanf("%d", &arrNum[i]);
        sum+=arrNum[i];
     }
    printf("%d", sum);
    return 0;
}
