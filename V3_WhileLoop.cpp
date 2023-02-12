#include<iostream>
using namespace std;
int main()
{

    // Printing numbers from 1 to 'n'
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i=1;
    cout<<"Numbers from 1 to "<<n<<" ->"<<endl;
    while(i<=n)
    {
        cout<<i<<endl;
        i=i+1;
    }


    // Calculating Sum of all numbers from 1 to 'num'
    int num;
    int sum=0;
    int j=1;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Sum of numbers from 1 to "<<num<<" : ";
    while(j<=num)
    {
        sum+=j;
        j=j+1;
    }
    cout<<sum<<endl;



    // Q1 : Find Sum of all even numbers from 1 to 'number'
    int number;
    int even_sum=0;
    int k=2;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Sum of all even numbers from 1 to "<<number<<" : ";
    while(k<=number)
    {
        even_sum+=k;
        k=k+2;
    }
    cout<<even_sum<<endl;



    // Q2 : Convert Fahrenheit temperature to degree Celcius
    float fah,cel;
    cout<<"Enter temperature in Fahrenheit : ";
    cin>>fah;
    cel=(fah-32)*(5.0/9);
    cout<<"Temperature in Celsius : "<<cel;



    // Check whether 'p' is prime or not
    int l,p;
    int flag=0;
    cout<<"Enter a number : ";
    cin>>p;
    for(l=2;l<p;l++)
    {
        if(p%l==0)
        flag=1;
    }
    if(flag==0)
    cout<<"It is a prime number"<<endl;
    else
    cout<<"It is not a prime number"<<endl;



    return 0;
}