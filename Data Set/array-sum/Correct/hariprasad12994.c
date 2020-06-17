#include<stdio.h>
#define MAX 1000

int main() {
    int array[MAX], num;
    int i;
    int sum=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("%d",sum);    
    return 0;
}
