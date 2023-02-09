#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n>0)
    {
        cout<<"n is positive"<<endl<<endl;
    }
    else
    {
        cout<<"n is not positive"<<endl<<endl;
    }



    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"a is greater that b"<<endl<<endl;
    }
    if(b>a)
    {
        cout<<"b is greater that a"<<endl<<endl;
    }



    int c;
    cout<<"Enter the value of c : ";
    cin>>c;
    if(c>0)
    {
        cout<<"c is positive"<<endl<<endl;
    }
    else
    {
        if(c<0)
        {
            cout<<"c is negative"<<endl<<endl;
        }
        else
        {
            cout<<"c is zero"<<endl<<endl;
        }
    }



// Better Version of the program above 
    int d;
    cout<<"Enter the value of d : ";
    cin>>d;
    if(d>0)
    {
        cout<<"d is positive"<<endl<<endl;
    }
    else if(d<0)
    {
        cout<<"d is negative"<<endl<<endl;
    }
    else
    {
        cout<<"d is zero"<<endl<<endl;
    }
}