/**
 * Problem URL : https://www.hackerrank.com/challenges/simple-array-sum
 *
 **/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

    int n = 0, buf = 0;
    int sum = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &buf);
        sum += buf;            
    }

    printf("%d", sum);

    return 0;
}