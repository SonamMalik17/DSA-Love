#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    // cin is used to take user input but it didn't read - tab, space, enter
    cin>>n;
    cout<<"The value of n : "<<n<<endl<<endl;


    int a,b;
    cout<<"Enter the value of a and b : ";
    // cin is used to take user input but it didn't read - tab, space, enter 
    // suppose we enter a=10 and b=" " then cin wouldn't read this space we have to enter anything else rather than - tab, space, enter
    cin>>a>>b;
    cout<<"The value of a and b are respectively : "<<a<<" "<<b<<endl<<endl;

    int c,d;
    cout<<"Enter the value of c and d : ";
    // So, in order to read - tab, space, enter - as user input (if we wnter single digit number if we enter a double digit number then left digit is assigned to c and right to d and space etc will not be read) we have to use cin.get() instead of cin but cin.get() read everything as characters and when the same character is stored in integer type variables so it prints their ascii values
    c=cin.get();
    d=cin.get();
    cout<<"The value of c and d are respectively : "<<c<<" "<<d<<endl<<endl;
}