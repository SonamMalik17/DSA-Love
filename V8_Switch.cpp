#include<iostream>
using namespace std;
int main()
{
    int num1=2;
    cout<<endl;
    switch(num1)
    {
        case 1: cout<<"First"<<endl;
                break;
        case 2: cout<<"Second"<<endl;
                break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    char ch1='1';
    cout<<endl;
    switch(ch1)
    {
        case 1: cout<<"First"<<endl;
                break;
        case '1': cout<<"Charcter One"<<endl;
                break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    char ch2='a';
    cout<<endl;
    switch(ch2)
    {
        case 1: cout<<"First"<<endl;
                break;
        case '1': cout<<"Charcter One"<<endl;
                break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    char ch3='a';
    cout<<endl;
    switch(ch3)
    {
        case 1: cout<<"First"<<endl;
                break;
        case '1': cout<<"Charcter One"<<endl;
                break;
        //default case is optional
    }
    cout<<endl;


    char num2=1;
    cout<<endl;
    switch(num2)
    {
        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
        case '1': cout<<"Charcter One"<<endl;
                break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    char num3=1;
    cout<<endl;
    switch(num3)
    {
        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                // break is optional and break statement takes you out of switch
        case '1': cout<<"Charcter One"<<endl;
                  break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    char ch4='1';
    int num4=1;
    cout<<endl;
    switch(ch4)
    {
        case 1: cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
        case '1': switch(num4)
                  {
                      case 1:  cout<<"Value of num is "<<num4<<endl;  
                               break;
                      case 2:  cout<<"Value of num is "<<num4<<endl;  
                               break;
                  }
                  break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    // HW
    // infinite loop me switch how to come out of loop bcoz break to bs switch se bahar nikalega use exit to come out of loop
    // exit function
    // The syntax for using the exit() function is given below,
    // exit( exit_value );
    // Here, exit_value is the value passed to the Operating system after the successful termination of the program. This value can be tested in batch files where ERROR LEVEL gives us the return value provided by the exit() function. Generally, the value 0 indicates a successful termination and any other number indicates some error.
    int num4=0;
    int num4=2;
    cout<<endl;
    while(1)
    {
        switch(num4)
        {
            case 1: cout<<"First"<<endl;
                    exit(0);
            case 2: cout<<"Second"<<endl;
                    break;
            default: cout<<"Default case"<<endl; 
        }
        cout<<"number = "<<num4<<endl;
        ++num4;
    }


    // Continue Trial 
    // Continue ke liye loop honi jaruri h only switch me ye kaam nhi karega 
    int num5=3;
    cout<<endl;
    while(1)
    {
        --num5;
        switch(num5)
        {
            case 1: cout<<"First"<<endl;
                    break;
            case 2: cout<<"Second"<<endl;
                    continue;
            default: cout<<"It is default case"<<endl;
                     exit(0);
        }
    }
    cout<<endl;


    // Calculator
    int a1,b1,c1,ch5;
    cout<<"Enter two numbers : ";
    cin>>a1>>b1;
    cout<<"Enter 0 for exit"<<endl;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for Multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl;
    cout<<"Enter 5 for Remainder (Modulus)"<<endl;
    cout<<"Enter your Choice : ";
    cin>>ch5;
    while(1)
    {
        switch(ch5)
        {
            case 0: cout<<"Exit"<<endl;
                    exit(0);
            case 1: c1=a1+b1;
                    cout<<"Addition result : "<<c1<<endl;
                    break;
            case 2: c1=a1-b1;
                    cout<<"Subtraction result : "<<c1<<endl;
                    break;
            case 3: c1=a1*b1;
                    cout<<"Multiplication result : "<<c1<<endl;
                    break;
            case 4: c1=a1/b1;
                    cout<<"Division result : "<<c1<<endl;
                    break;
            case 5: c1=a1%b1;
                    cout<<"Remainder (Modulus) result : "<<c1<<endl;
                    break;
            default: cout<<"Enter a valid choice"<<endl;
        }
        cout<<"Enter 0 for exit"<<endl;
        cout<<"Enter 1 for Addition"<<endl;
        cout<<"Enter 2 for Subtraction"<<endl;
        cout<<"Enter 3 for Multiplication"<<endl;
        cout<<"Enter 4 for Division"<<endl;
        cout<<"Enter 5 for Remainder (Modulus)"<<endl;
        cout<<"Enter your Choice : ";
        cin>>ch5;
    }


    // Inspire by Babbar's Calculator
    int a2,b2,c2;
    char ch6;
    cout<<"Enter two numbers : ";
    cin>>a2>>b2;
    cout<<"Enter the operation you want to perform : ";
    cin>>ch6;
    switch(ch6)
    {
        case '+': c2=a2+b2;
                  cout<<"Addition result : "<<c2<<endl;
                  break;
        case '-': c2=a2-b2;
                  cout<<"Subtraction result : "<<c2<<endl;
                  break;
        case '*': c2=a2*b2;
                  cout<<"Multiplication result : "<<c2<<endl;
                  break;
        case '/': c2=a2/b2;
                  cout<<"Division result : "<<c2<<endl;
                  break;
        case '%': c2=a2%b2;
                  cout<<"Remainder (Modulus) result : "<<c2<<endl;
                  break;
        default: cout<<"Enter a valid choice"<<endl;
    }


    int num6=1;
    cout<<endl;
    switch(2*num6)    // Expression 
    {
        case 1: {cout<<"First"<<endl;}   // Brackets Are optional
                cout<<"First Again"<<endl;
                break;
        case 2: cout<<"Second"<<endl;
                break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;


    // HW
    int Amount,x,y,z,a;
    cout<<"Enter amount : ";
    cin>>Amount;
    switch(1)
    {
        case 1: x=Amount/100;
                Amount=Amount%100;
                cout<<"No. of 100-rupee note : "<<x<<endl;
        case 2: y=Amount/50;
                Amount=Amount%50;
                cout<<"No. of 50-rupee note : "<<y<<endl;
        case 3: z=Amount/20;
                Amount=Amount%20;
                cout<<"No. of 20-rupee note : "<<z<<endl;
        case 4: a=Amount/1;
                Amount=Amount%1;
                cout<<"No. of 1-rupee note : "<<a<<endl;
    }


    return 0;
}