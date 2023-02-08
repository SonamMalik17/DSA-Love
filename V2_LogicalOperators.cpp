#include<iostream>
using namespace std;
int main()
{
    int a=2;
    int b=3;
    int c=0;

    bool first = (a==b)&&(a>=b);
    cout<<"first = "<<first<<endl<<endl;

    bool Second = (a==b)||(a>=b);
    cout<<"Second = "<<Second<<endl<<endl;

    cout<<"!c = "<<!c<<endl<<endl;

    return 0;
}