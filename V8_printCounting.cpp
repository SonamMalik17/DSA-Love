#include<iostream>
using namespace std;

// Function Signature
void printCounting(int n)
{
    // Function Body
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    cout<<endl;
    return;  // No problem if we do this 
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Counting from 1 to "<<n<<" : "<<endl;
    // Function Call
    printCounting(n);
    return 0;
}