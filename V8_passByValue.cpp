#include<iostream>
using namespace std;

void passByValue(int n)
{
    n++;
    cout<<"passByValue number value : "<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    passByValue(n);   // it is pass by value because we are passing the value of n and when we use pass by value then only a copy is created in the called function so the value of n(main function) get copied in n(passByValue function) and both of these are different memory locations only there values are same 

    // so n(main) remains as it is even when we increment by 1 in passByValue function so finally only the n(passByValue function) gets incremented by 1 
    cout<<"main number value : "<<n<<endl;
    return 0;
}