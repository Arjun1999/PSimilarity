#include<stdio.h>
#include<stdlib.h>
int mainf()
{
    int n,sum = 0;
    scanf("%d", &n);
    int *a = (int *) malloc(sizeof(int)*n);
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        sum = sum + a[i];
    }
    printf("%d\n",sum);
    return 0;
}
