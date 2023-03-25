#include<iostream>
using namespace std;

void printArray(int Arr[], int size)
{
    for(int j=0;j<size;j++)
        cout<<Arr[j]<<" ";
}

int main()
{
    // Declare
    int arr1[15];
    cout<<endl;
    cout<<"Everything is fine"<<endl<<endl;


    // Accessing an array 
    int arr2[15];
    cout<<"Value at 14 index : "<<arr2[14]<<endl;
    cout<<"Value at 20 index : "<<arr2[20]<<endl;
    // Garbage value is printed 


    // Initialising an array
    int arr3[3]={5,7,11};
    // Accessing an element
    cout<<"Value at index 2 : "<<arr3[2]<<endl;


    int arr4[15]={2,7};
    int n1=15;
    cout<<"Printing the array : "<<endl;
    // Print the array 
    for(int i1=0;i1<n1;i1++)
        cout<<arr4[i1]<<" ";
    // arr4[0]=2, arr4[1]=7, arr4[2...14]=0 (informal way just to indicate all indexes from 2 to 14)


    // All elements are initialised to zero but it works only for zero i.e. if we want to initialize every element with zero
    int arr5[10]={0};
    int n2=10;
    cout<<"Printing the array : "<<endl;
    // Print the array
    for(int i2=0;i2<n2;i2++)
        cout<<arr5[i2]<<" ";


    // Checking if it works the same way if we want to initialize every element with 1
    int arr6[10]={1};
    int n3=10;
    cout<<"Printing the array : "<<endl;
    // Print the array
    for(int i3=0;i3<n3;i3++)
        cout<<arr6[i3]<<" ";
    // arr6[0]=1, arr6[1...9]=0 (informal way just to indicate all indexes from 1 to 9)


    // Initialising all array elements with any number 
    int arr7[100];
    fill_n(arr7, 100, 17);
    int n4=100;
    cout<<"Printing the array : "<<endl;
    for(int i4=0;i4<n4;i4++)
        cout<<arr7[i4]<<" ";


    // Using function to print array
    int arr8[100]={0};
    int n5=100;
    cout<<"Printing the array : "<<endl;
    printArray(arr8,n5);


    // Calculating no. of memory locations taken by an array = no. of elements in an array
    int arr9[5]={1,2,3,4,5};
    int n6=sizeof(arr9)/sizeof(int);
    cout<<"No. of memory Locations : "<<n6<<endl;


    // Calculating no. of memory locations taken by an array != no. of elements in an array as we want 2 but answer will be 5 in this case also so we didn't use this way in general and used to send the no. of elements in an array as an argument to functons like printArray().
    int arr10[5]={1,2};
    int n7=sizeof(arr10)/sizeof(int);
    cout<<"No. of memory Locations : "<<n7<<endl;


    // Character-type Array
    char arr11[5]={'a','b','c','d','e'};
    int n8=5;
    // But we can use the same printArray function as the printArray is accepting only integer-type array
    cout<<"Character Array : "<<endl;
    for(int i5=0;i5<n8;i5++)
        cout<<arr11[i5]<<" "; 


    // Similarly we can have double, float and bool etc. type arrays
    double arr12[10];
    float arr13[5];
    bool arr14[3];


    return 0;
}