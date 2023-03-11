#include<iostream>
using namespace std;

int combination(int n1,int r1)
{
    int c1=1;
    if(r1==0)
        return 1;
    if(r1!=0)
    {
        for(int i1=0;i1<r1;i1++)
            c1=c1*(n1--);
        return (c1/r1);
    }
}
int main()
{
    int n2,r2,c2;
    cout<<"Enter upper : ";
    cin>>n2;
    cout<<"Enter lower : ";
    cin>>r2;
    c2=combination(n2,r2);
    cout<<n2<<"C"<<r2<<" : "<<c2<<endl;
    return 0;
}