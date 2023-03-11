#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    return (num/deno);
}
int main()
{
    int n,r,ncr;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    ncr=nCr(n,r);
    cout<<n<<"C"<<r<<" : "<<ncr<<endl;
    return 0;
}