#include<iostream>
using namespace std;
int main()
{
    int i=7;
    cout<<"++i = "<<++i<<endl<<endl;
    cout<<"++i = "<<i++<<endl<<endl;
    cout<<"++i = "<<i--<<endl<<endl;
    cout<<"++i = "<<--i<<endl<<endl;


    // Q1
    int a1,b1=1;
    a1=10;
    if(++a1)
        cout<<b1;
    else
        cout<<++b1;

    
    // Q2
    int a2=1;
    int b2=2;
    if (a2-- > 0 && ++b2 > 2){
        cout<<"Stage1 - Inside If ";
    }
    else{
        cout<<"Stage2 - Inside else ";
    }
    cout<< a2 << " " << b2 << endl;


    // Q3
    int a3=1;
    int b3=2;
    if (a3-- > 0 || ++b3 > 2){
        cout<<"Stage1 - Inside If ";
    }
    else{
        cout<<"Stage2 - Inside else ";
    }
    cout<< a3 << " " << b3 << endl;


    // Q4
    int number = 3;
    cout << (25 * (++number) );


    // Q5
    int a4 = 1;
    int b4 = a4++;
    int c = ++a4;
    cout << b4;
    cout << c;


    return 0;
}