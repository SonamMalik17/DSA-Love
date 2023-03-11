#include<iostream>
using namespace std;

// form1
int power(int a2,int b2)    
// variable names same bhi le skte h (the names we used at the calling time) or different bhi 
// variables ka scope like ans2 ka scope or accessibility only power function me h isse bahar nhi , same for parameters 
{
    int ans2=1;
    for(int i2=1;i2<=b2;i2++)
        ans2=ans2*a2;
    return ans2;
}


// form2
int power(int c2,int d2)
{
    int answer2=1;
    for(int i3=1;i3<=d2;i3++)
        answer2=answer2*c2;
    return answer2;
}


// form3
int power()
{
    // the variables declared in main() can't be accessed here bcoz a3 is local variable of main()and can't be accessed outside
    int c3,d3;
    cout<<"Enter a number : ";
    cin>>c3;
    cout<<"Enter the power you want this number raise to : ";
    cin>>d3;
    int answer3=1;
    for(int i4=1;i4<=d3;i4++)
        answer3=answer3*c3;
    return answer3;
}


int main()
{
    // Without functions
    int a1,b1,ans1=1;
    cout<<"Enter a number : ";
    cin>>a1;
    cout<<"Enter the power you want this number raise to : ";
    cin>>b1;
    for(int i1=1;i1<=b1;i1++)
        ans1=ans1*a1;
    cout<<"Answer is "<<ans1<<"(Without functions)"<<endl;


    // With Functions (form1 and form2)
    int a2,b2,ans2;
    cout<<"Enter a number : ";
    cin>>a2;
    cout<<"Enter the power you want this number raise to : ";
    cin>>b2;
    ans2=power(a2,b2);
    cout<<"Answer is "<<ans2<<"(With functions)"<<endl;


    // With Functions (form3)
    int ans3;
    ans3=power();
    cout<<"Answer is "<<ans3<<"(With functions)"<<endl;


    // With Functions (form3)
    cout<<"Answer is "<<power()<<"(With functions)"<<endl;


    // With Functions (form1 and form2)
    int a3,b3,ans4;
    cout<<"Enter a number : ";
    cin>>a3;
    cout<<"Enter the power you want this number raise to : ";
    cin>>b3;
    ans4=power(a3,b3);    // form1 and form2
    cout<<"Answer is "<<ans4<<"(With functions)"<<endl;
    int c4,d4;
    cout<<"Enter another number : ";
    cin>>c4;
    cout<<"Enter exponent : ";
    cin>>d4;
    ans4=power(c4,d4);    // form1 and form2
    cout<<"Answer is "<<ans4<<"(With functions)"<<endl;
    ans4=power();         // form3
    cout<<"Answer is "<<ans4<<"(With functions)"<<endl;
    ans4=power();         // form3
    cout<<"Answer is "<<ans4<<"(With functions)"<<endl;


    return 0;
}