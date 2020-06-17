#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int num)
    {
    int a[10000]={0};
    int i=0;
    int sum = 0;
    for(i=0;i<num;i++)
        {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    scanf("%d",&num);
    func(num);
    return 0;
}
