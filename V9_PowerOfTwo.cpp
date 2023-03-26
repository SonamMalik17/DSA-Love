#include<iostream>
using namespace std;

bool powerOfTwo(int n)
{
    int c=0;
    while(n!=0)
    {
        int bit=n&1;
        if(bit==1)
            ++c;
        n=n>>1;
    }
    if(c==1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool power=powerOfTwo(n);
    if(power)
        cout<<"YES!!!"<<endl;
    else
        cout<<"NO!!!"<<endl;
    return 0;
}