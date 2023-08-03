#include <iostream>
using namespace std;
void ismember(int arr[], int element, int size)
{
    int flag = 0;
    cout << "\nEnter element to be checked from above array : ";
    cin >> element;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element is present in the array" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Element is not Present in the array" << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array: {";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
    int element;
    ismember(arr, element, n);
    return 0;
} 
