#include<iostream>
using namespace std;
int main()
{
    int i,a[10],min,max,sum1=0,sum2=0;
for(i=0;i<5;i++)
{
    cin>>a[i];
}
max=a[0];
min=a[0];
for(i=0;i<5;i++)
{
    if(max>a[i])
    {max=a[i];}

    if(min<a[i])
    {min=a[i];}
    
}
for(i=0;i<5;i++)
{
    if(a[i]!=max)
    {
        sum1=sum1+a[i];
    }
    if(a[i]!=min)
    {
        sum2=sum2+a[i];
    }

}
cout<<sum1<<endl<<sum2;

}