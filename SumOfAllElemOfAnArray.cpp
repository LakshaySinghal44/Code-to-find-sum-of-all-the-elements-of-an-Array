#include<iostream>
using namespace std;
int sum(int arr[], int p)
{
    int count = 0;
    for(int i=0;i<p;i++)
    {
         count = count +arr[i];

    }
    cout << count;
    return count;
}




int main()
{
    int arr[20];
    int n,ele;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter your Elements: " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        
    }
    cout << endl;
    cout << "Sum of your elemnts is: ";3
    sum(arr,n);




}