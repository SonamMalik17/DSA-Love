#include<iostream>
using namespace std;
int main()
{

    // Printing count from 1 to the entered number
    int n1,i1;
    cout<<"Enter a number : ";
    cin>>n1;
    cout<<"Printing count from 1 to n1 : "<<endl;
    for(i1=1;i1<=n1;i1++)
    cout<<i1<<endl;


    // Printing count from 1 to the entered number (Removing initialization part from for loop)
    int n2,i2=1; // initialization
    cout<<"Enter a number : ";
    cin>>n2;
    cout<<"Printing count from 1 to n2 : "<<endl;
    for(;i2<=n2;i2++)
    cout<<i2<<endl;


    // Printing count from 1 to the entered number (Removing initialization, updation part from for loop)
    int n3,i3=1; // initialization
    cout<<"Enter a number : ";
    cin>>n3;
    cout<<"Printing count from 1 to n3 : "<<endl;
    for(;i3<=n3;)
    {
        cout<<i3<<endl;
        i3++; // updation
    }


    // Printing count from 1 to the entered number (Removing initialization, updation, condition part from for loop)
    int n4,i4=1; // initialization
    cout<<"Enter a number : ";
    cin>>n4;
    cout<<"Printing count from 1 to n4 : "<<endl;
    for( ; ; )
    {
        if(i4<=n4) // condition
        {
           cout<<i4<<endl; 
        }
        else
            break;
        i4++; // updation
    }


    // Multiple - initializations, conditions, updations
    for(int a1 = 0, b1 = 1; a1>=0 && b1>=1 ; a1--, b1--)
        cout<<"a1 = "<<a1<< ", " <<"b1 = "<<b1<<endl;
    for(int a2 = 0, b2 = 1; a2>=0 ; a2--, b2--)
    {
        cout<<"a2 = "<<a2<<", ";
        if(b2>=1)
        cout<<"b2 = "<<b2<<endl;
    }
    for(int a3 = 0, b3 = 1, c3 = 2 ; a3>=0 && b3>=1 && c3>=2 ; a3--, b3--, c3--)
        cout<<"a3 = "<<a3<< ", " <<"b3 = "<<b3<< ", " <<"c3 = "<<c3<<endl;


    // Sum of numbers from 1 to the entered number
    int n5,i5,sum=0;
    cout<<"Enter a number : ";
    cin>>n5;
    for(i5=1;i5<=n5;i5++)
        sum+=i5;
    cout<<"Sum = "<<sum<<endl; 


    // Method1-Fibonacci Series
    int i6,c6,n6,a6=-1;
    int b6=1;
    cout<<"Enter number of terms of the Fibonacci Series u want to print : ";
    cin>>n6;
    cout<<"First "<<n6<<" terms of the Fibonacci Series : "<<endl;
    for(i6=0;i6<n6;i6++)
    {
        c6=a6+b6;
        cout<<c6<<" ";
        a6=b6;
        b6=c6;
    }


    // Method2-Fibonacci Series
    int i7,c7,n7,a7=0;
    int b7=1;
    cout<<"Enter number of terms of the Fibonacci Series u want to print : ";
    cin>>n7;
    cout<<"First "<<n7<<" terms of the Fibonacci Series : "<<endl;
    cout<<a7<<" "<<b7<<" ";
    for(i7=0;i7<(n7-2);i7++)
    {
        c7=a7+b7;
        cout<<c7<<" ";
        a7=b7;
        b7=c7;
    }


    // Check whether a number is prime or not 
    int i8,n8,flag=0;
    cout<<"Enter a number : ";
    cin>>n8;
    for(i8=2;i8<n8;i8++)
    {
        if(n8%i8==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Prime number"<<endl;
    else
        cout<<"not a prime number"<<endl;


    // Continue
    for(int i9=0;i9<5;i9++)
    {
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Plzz Reply"<<endl;
    }


    // HW
    for(int i10=0;i10<=5;i10++)
    {
        cout<< i10 << " ";
        i10++;
    }


    // HW
    for(int i11=0;i11<=5;i11--)
    {
        cout<< i11 << " ";
        i11++;
    }


    // HW
    for(int i12=0;i12<=15;i12+=2)
    {
        cout<< i12 <<" ";
        if(i12&1)
        {
            continue;
        }
        i12++;
    }


    // HW
    for(int i13=0;i13<5;i13++)
    {
        for(int j13=1;j13<=5;j13++)
        cout<<i13<<" "<<j13<<endl;
    }


    // HW
    for(int i14=0;i14<5;i14++)
    {
        for(int j14=1;j14<=5;j14++){
            if((i14+j14)==10)
            break;
            cout<<i14<<" "<<j14<<endl;
        }
    }
    return 0;
}