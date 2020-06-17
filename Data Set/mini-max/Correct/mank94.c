#include <stdio.h>

int main(){

   long long int a; 
   long long int b; 
    long long int c; 
   long long int d;
   long long int e,ans=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    ans = a+b+c+d+e;
    long long int ans1,ans2,ans3,ans4,ansmax,ansmin;
    ans1 =ans2=ans3=ans4=ansmax=ansmin=0;
    ans1 = (ans-a>ans-b)?ans-a:ans-b;
    ans2 = (ans-d>ans-c)?ans-d:ans-c;
    ans3 = (ans1>ans2)?ans1:ans2;
    ans4 = (ans3>ans-e)?ans3:ans-e;
    ansmax = ans4;
     ans1 =ans2=ans3=ans4=0;
    ans1 = (ans-a<ans-b)?ans-a:ans-b;
    ans2 = (ans-d<ans-c)?ans-d:ans-c;
    ans3 = (ans1<ans2)?ans1:ans2;
    ans4 = (ans3<ans-e)?ans3:ans-e;
    ansmin = ans4;
    printf("%lld %lld\n",ansmin,ansmax);
    return 0;
}
