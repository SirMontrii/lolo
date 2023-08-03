#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    if (argc < 2)
    {
        cout << "Enter the number of terms: ";
        cin >> n;
    }
    else
    {
        n = atoi(argv[1]);
    }
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += (-1) * (1.0 / pow(i, i));
        }
        else
        {
            sum += (1.0 / pow(i, i));
        }
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
