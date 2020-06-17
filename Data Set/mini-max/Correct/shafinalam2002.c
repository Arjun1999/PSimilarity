#include <stdio.h>

int main()
{
    int n = 5, arr[100], i;
    long long int sum = 0, s1, s2, s3, s4, s5, max, min;

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        s1 = sum - arr[0];
        s2 = sum - arr[1];
        s3 = sum - arr[2];
        s4 = sum - arr[3];
        s5 = sum - arr[4];

        if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5) max = s1;
        else if(s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5) max = s1;
        else if(s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5) max = s2;
        else if(s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5) max = s3;
        else if(s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5) max = s4;
        else if(s5 > s1 && s5 > s2 && s5 > s3 && s5 > s4) max = s5;

        if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5) min = s1;
        else if(s1 < s2 && s1 < s3 && s1 < s4 && s1 < s5) min = s1;
        else if(s2 < s1 && s2 < s3 && s2 < s4 && s2 < s5) min = s2;
        else if(s3 < s1 && s3 < s2 && s3 < s4 && s3 < s5) min = s3;
        else if(s4 < s1 && s4 < s2 && s4 < s3 && s4 < s5) min = s4;
        else if(s5 < s1 && s5 < s2 && s5 < s3 && s5 < s4) min = s5;

    }
    printf("%lld %lld", min, max);
    return 0;
}
