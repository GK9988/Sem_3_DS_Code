#include <bits/stdc++.h>
using namespace std;

void arrayScanner(int *&arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
}

void arrayPrinter(int *&arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void arrayInsertion(int *&arr, int &length, int value, int position)
{
    for (int i = length; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    length++;
}

int main()
{
    int size;
    int length;
    int *arr;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << endl;
    arr = new int[size];

    int newValue;
    int position;

    cout << endl
         << "Enter the no. of elements you want to add Initially: ";
    cin >> length;
    cout << endl;

    cout << "Enter the values of the array: " << endl
         << endl;

    arrayScanner(arr, length);

    cout << "Arrray Is: " << endl;
    arrayPrinter(arr, length);

    cout << endl
         << "Enter the position you want to insert in: ";
    cin >> position;

    cout << endl
         << "Enter the value you want to insert: ";
    cin >> newValue;
    cout << endl;

    arrayInsertion(arr, length, newValue, position - 1);

    cout << endl
         << "New Array is: " << endl;
    arrayPrinter(arr, length);
}