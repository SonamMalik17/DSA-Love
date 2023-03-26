#include<iostream>
using namespace std;

int getMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int getMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main()
{
    int n;
    cout<<"Enter Array Length : ";
    cin>>n;

    //int arr[n];   // Wrong way, writing this way should be avoided later we will come back on this instead of n it's better to use the maximum length given in constraints such as 1<=n<=10000 so it's better to declare arr[10000]

    int arr[100];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];     // Taking user-input of array elements
    int max=getMax(arr,n);
    int min=getMin(arr,n);
    cout<<"Maximum Value : "<<max<<endl;
    cout<<"Minimum Value : "<<min<<endl;
    return 0;

}