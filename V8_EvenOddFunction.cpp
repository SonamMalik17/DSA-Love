#include<iostream>
using namespace std;

bool isEven(int a)
{
    if(a&1)
        return 0;
    return 1;
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isEven(num))
        cout<<"Number is even"<<endl;
    else
        cout<<"Number is odd"<<endl;

    return 0;
}