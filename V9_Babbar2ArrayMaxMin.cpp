#include<iostream>
using namespace std;

int getMax(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=1;i<n;i++)
        maxi=max(maxi,arr[i]);
    return maxi;
}

int getMin(int arr[],int n)
{
    int mini=arr[0];
    for(int i=1;i<n;i++)
        mini=min(mini,arr[i]);
    return mini;
}

int main()
{
    int n;
    cout<<"Enter Array Length : ";
    cin>>n;
    int arr[100];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];    
    int max=getMax(arr,n);
    int min=getMin(arr,n);
    cout<<"Maximum Value : "<<max<<endl;
    cout<<"Minimum Value : "<<min<<endl;
    return 0;

}