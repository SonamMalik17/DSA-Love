#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;

    // Bitwise AND
    cout<<"a&b = "<<(a&b)<<endl<<endl;

    // Bitwise OR
    cout<<"a|b = "<<(a|b)<<endl<<endl;

    // Bitwise NOT
    cout<<"~a = "<<~a<<endl<<endl;

    // Bitwise XOR
    cout<<"a^b = "<<(a^b)<<endl<<endl;

    // Right Shift Operators
    cout<<(17>>1)<<endl<<endl;
    cout<<(17>>2)<<endl<<endl;

    // Left Shift Operators
    cout<<(19<<1)<<endl<<endl;
    cout<<(21<<2)<<endl<<endl;


    return 0;
}