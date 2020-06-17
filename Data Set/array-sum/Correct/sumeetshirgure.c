#include <stdio.h>

char ch;

short read(){
    short t=0;
    ch=getchar_unlocked();
    while(ch>47){
        t*=10;
        t+=ch-48;
        ch=getchar_unlocked();
    };
    return t;
};

int main() {
    short N;
    int sum=0;
    scanf("%i",&N);getchar_unlocked();
    while(N--){
        sum+=read();
    }
    printf("%i",sum);
    return 0;
}
