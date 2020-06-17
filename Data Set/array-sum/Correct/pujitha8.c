#include <stdio.h>
#include<malloc.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size,i,sum=0;
    int *arr;
    scanf("%d",&size);
    arr=(int *)malloc(sizeof(int)*size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
