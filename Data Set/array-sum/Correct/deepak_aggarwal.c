#include <stdio.h>

int main() {

   int size = 0;
    scanf("%d", &size);
    int arr[size];
    long int sum = 0;
    int current;
    while(size-- > 0){
        scanf("%d", &current);
        sum+=current;
    }
    printf("%ld", sum);
    return 0;
}
