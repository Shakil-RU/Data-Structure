#include<bits/stdc++.h>
using namespace std;


void max_value(int arr[], int n)
{
    int max =arr[0];
    for(int j = 0; j<n; j++)
    {
        if(arr[j]>max)
        {
            max = arr[j];
        }
    }
    cout<<"max value: "<<max<<endl;
}

void min_value(int arr[], int n)
{
    int min = arr[0];
    for(int j = 0; j<n; j++)
    {
        if(arr[j]<min)
        {
            min = arr[j];
        }
    }
    cout<<"Minimum value: "<<min<<endl;
}

void average_value(int arr[], int n)
{
    int sum = 0;
    double average = 0;
    for(int j =0; j<n; j++)
    {
        sum = sum + arr[j];
    }
    average = sum/n;
    cout<<"Average: "<<average<<endl;

}
void total_value(int arr[], int n)
{
    int total = 0;
    for(int j = 0; j<n; j++)
    {

        total = total + arr[j];
    }
    cout<<"Total: "<<total<<endl;
}

void sin_value(int arr[], int n)
{
    for(int j =0; j<n; j++)
    {
        double s = sin(arr[j]);
        cout<<"sin value of"<<arr[j]<<":"<<s<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    max_value(arr ,n);
    min_value(arr, n);
    average_value(arr, n);
    total_value(arr, n);
    sin_value(arr, n);
    return 0;
}
