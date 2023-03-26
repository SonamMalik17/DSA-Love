#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    cout<<"Inside the function"<<endl;
    arr[0]=120;    // As we are sending base address of array instead of value so it gets updated everywhere as soon as update function is called 
    // Printing the array
    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";
    cout<<endl; 
    cout<<"Going back to main function"<<endl;
}

int main()
{
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    update(arr,3);
    // Printing the array
    for(int i=0;i<3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}