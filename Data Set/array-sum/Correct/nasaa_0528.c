#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int n, sum = 0;
        scanf("%d", &n);
        if(n<1 || n>1000){
        printf("Wrong input !!! \n");
        exit(EXIT_FAILURE);
        }
        int a[n], i=0;
        while (i < n && scanf("%d", &a[i++]) == 1)
        ;
        for(int i=0; i<n; i++){
                if(a[i]<0 || a[i]>1000){
                printf("out of range !!! \n");
                exit(EXIT_FAILURE);
                }
                else sum = sum + a[i];
        }

        printf("%d\n", sum);
    return 0;
}