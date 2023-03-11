#include<iostream>
using namespace std;

// HW
int update(int a){
    a-=5;
    return a;
}

int main()
{
    // HW
    int a=15;
    update(a);
    cout<<a<<endl;
    return 0;
}