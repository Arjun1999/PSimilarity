#include <stdio.h>

int read()
    {
    int inp=0;
    char ch=0;
    while(ch<33)
        ch=getchar();
    while(ch>='0' && ch<='9')
        {
        inp=(inp<<3)+(inp<<1)+(ch-'0');
        ch=getchar();
    }
    return inp;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,sum=0;
    n=read();
    while(n--)
        {
        sum+=read();
    }
    printf("%d",sum);
    return 0;
}
