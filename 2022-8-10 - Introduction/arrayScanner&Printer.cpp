#include <bits/stdc++.h>
using namespace std;

void arrayScanner(int *&arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrayPrinter(int *&arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    int *arr;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    arr = new int[n];

    cout << "Enter the values of the array: " << endl
         << endl;

    arrayScanner(arr, n);

    cout << "Arrray Is: " << endl;
    arrayPrinter(arr, n);
}