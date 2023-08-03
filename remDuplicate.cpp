#include <iostream>
using namespace std;

void removeduplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"After removing duplicate value {";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"}";
}

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original array is {";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"}"<<endl;
    removeduplicate(arr, n);
    return 0;
}
