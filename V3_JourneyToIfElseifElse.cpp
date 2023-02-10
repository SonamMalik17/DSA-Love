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



    // Q1
    int r=9;
    if(r==9){
        cout<<"NINEY";
    }
    if(r>0){
        cout<<"POSITIVE";
    }
    else{
        cout<<"NEGATIVE";
    }



    // Q2
    int s=2;
    int t=s+1;
    if((s=3)==t){
        // true and printed
        cout<<s;
    }
    else{
        cout<<s+1;
    }



    // Q3
    int z=24;
    if(z>20){
        cout<<"Love ";
    }
    else if(z==24){
        cout<<"Lovely";
    }
    else{
        cout<<"Babbar";
    }
    cout<<z;



    // Q4 (H/W)
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"This is Lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This is Uppercase";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is Numeric";
    }


    
    return 0;
}