#include<iostream>
using namespace std;

// HW1
int ap(int n)
{
    return ((3*n)+7);
}


// HW2
int setBit(int a)
{
    int abit,na=0;
    while(a!=0)
    {
        abit=a&1;
        if(abit==1)
            ++na;
        a=a>>1;
    }
    return na;
}


// HW3
int Fibo(int n)
{
    int c,a=-1,b=1;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}


int main()
{
    // HW1
    int m,ans;
    cout<<"Enter m : ";
    cin>>m;
    ans=ap(m);
    cout<<"Term "<<m<<" : "<<ans<<endl;


    // HW2
    int a,b,abit,bbit;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    abit=setBit(a);
    bbit=setBit(b);
    cout<<"Total no. of set bits : "<<(abit+bbit)<<endl;


    // HW3
    int n,d;
    cout<<"Enter term no. : ";
    cin>>n;
    d=Fibo(n);
    cout<<"Term "<<n<<" : "<<d<<endl;
    return 0;
}