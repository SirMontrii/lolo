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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void arraymerge(int arr[], int n, int arr1[], int m)
{
    int i = 0, j = 0, k = 0;
    int final[n + m];
    while (i < n && j < m)
    {
        if (arr[i] < arr1[j])
            final[k++] = arr[i++];
        else
            final[k++] = arr1[j++];
    }

    while (i < n)
        final[k++] = arr[i++];

    while (j < m)
        final[k++] = arr1[j++];
    removeduplicate(final, k);
}
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 7, 8};
    int arr1[] = {3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "First array is {";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "}" << endl;
    cout << "Second array is {";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << ",";
    }
    cout << "}"<<endl;
    cout<<"After merging two arrays {";
    arraymerge(arr, n, arr1, size);
    cout<<"}";
    return 0;
}
