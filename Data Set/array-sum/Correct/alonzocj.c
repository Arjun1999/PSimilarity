#include <stdio.h>

int main() {
    
    int a;
    
    scanf("%d", &a);
    
    int array[a];
    
    int sum = 0;
    
    for (int i = 0; i < a; i++) {
        int b = 0;
        scanf("%d", &b);
        array[i] = b;
    }
    
    for (int i = 0; i < a; i++) {
        sum = sum + array[i];
    }
    
    printf("%d", sum);
    
}
