#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;

    bool first= (a>b);
    cout<<"a>b : "<<first<<endl<<endl;

    bool second= (a<b);
    cout<<"a<b : "<<second<<endl<<endl;

    bool third= (a>=b);
    cout<<"a>=b : "<<third<<endl<<endl;

    bool fourth= (a<=b);
    cout<<"a<=b : "<<fourth<<endl<<endl;

    bool fifth= (a==b);
    cout<<"a==b : "<<fifth<<endl<<endl;

    bool sixth= (a!=b);
    cout<<"a!=b : "<<sixth<<endl<<endl;

    return 0;
}