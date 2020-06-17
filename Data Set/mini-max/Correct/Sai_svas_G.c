#include<stdio.h>
int main()
{
    long long int a,b,c,d,e;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    long long int A=b+c+d+e;
    long long int B=a+c+d+e;
    long long int C=a+b+d+e;
    long long int D=a+b+c+e;
    long long int E=a+b+c+d;
    if(A<B && A<C && A<D && A<E)
        printf("%lld ",A);
        else if(B<A && B<C && B<D && B<E)
        printf("%lld ",B);
        else if(C<B && C<A && C<D && C<E)
        printf("%lld ",C);
        else if(D<B && D<C && D<A && D<E)
        printf("%lld ",D);
        else
        printf("%lld ",E);
        if(A>B && A>C && A>D && A>E)
        printf("%lld",A);
    else if(B>A && B>C && B>D && B>E)
        printf("%lld",B);
    else if(C>B && C>A && C>D && C>E)
        printf("%lld",C);
    else if(D>B && D>C && D>A&& D>E)
        printf("%lld",D);
    else
        printf("%lld",E);

        return 0;

}
