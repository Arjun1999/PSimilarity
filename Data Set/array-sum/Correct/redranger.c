#include <stdio.h>
#include <malloc.h>

int main() {

    int t;
    int count; 
    int sum;
    count = 0;
    sum = 0;
    int c;
    scanf("%d", &t);
    //printf("%d ", t);
    while(count < t) {
        scanf("%d ", &c);
        //printf("%d ", c);
        sum = sum + c;
        count++;
        //printf("%d ", sum);
    }
    printf("%d", sum);
    return sum;
}
