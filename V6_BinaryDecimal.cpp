#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int bit,n;
    cout<<"Enter a number : ";
    cin>>n;
    float ans=0;
    int i=0;
    while(n!=0)
    {
        bit = n & 1;
        ans=(((bit * pow(10,i)) + ans));
        n=n>>1;
        i++;
    }
    cout<<"Answer is : "<<ans; 
    return 0;
}