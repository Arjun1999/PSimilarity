#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,i;
    scanf("%d",&size);
    int num;
    int sum = 0;
    for(i=0;i<size;i++){
        scanf("%d",&num);
        sum += num;
    }
    printf("%d",sum);
    return 0;
}
