#include<iostream>
using namespace std;

bool isPrime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isPrime(num))
        cout<<"It is a prime number"<<endl;
    else
        cout<<"It is not a prime number"<<endl;

    return 0;
}