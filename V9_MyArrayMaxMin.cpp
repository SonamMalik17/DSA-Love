#include<iostream>
using namespace std;

int arrayMax(int Arr[], int size)
{
    for(int j=0;j<size;j++)
    {
        int c=0;
        for(int k=0;k<size;k++)
        {
            if(j!=k)
            {
                if(Arr[j]>Arr[k])
                ++c;
                if(c==(size-1))
                return Arr[j];
            }
        }
    }
}

int arrayMin(int Arr[], int size)
{
    for(int j=0;j<size;j++)
    {
        int c=0;
        for(int k=0;k<size;k++)
        {
            if(j!=k)
            {
                if(Arr[j]<Arr[k])
                ++c;
                if(c==(size-1))
                return Arr[j];
            }
        }
    }
}

int main()
{
    int arr[4]={4,12,8,10};
    int n=4;
    int max=arrayMax(arr,n);
    cout<<"Maximum element : "<<max<<endl;
    int min=arrayMin(arr,n);
    cout<<"Minimum element : "<<min<<endl;
    return 0;
}