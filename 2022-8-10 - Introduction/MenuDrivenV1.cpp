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
    cout << endl
         << endl;
    arr = new int[size];
    int newValue;
    int position;
    int choice = 0;

    cout << endl
         << "Enter the no. of elements you want to add Initially: ";
    cin >> length;
    cout << endl
         << endl;

    cout << "Enter the values of the array: " << endl
         << endl;

    arrayScanner(arr, length);

    cout << endl
         << endl;

    while (choice != 3)
    {
        cout << endl
             << endl;

        cout << "****** Array Menu ******" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Insert an Element in the Array" << endl;
        cout << "3. Exit";

        cout << endl
             << "Enter you Choice Number: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Arrray Is: ";
            arrayPrinter(arr, length);
            cout << endl;
            break;
        case 2:
            cout << endl
                 << "Enter the position you want to insert in: ";
            cin >> position;

            cout << endl
                 << "Enter the value you want to insert: ";
            cin >> newValue;
            cout << endl;

            arrayInsertion(arr, length, newValue, position - 1);
            cout << "Successfully Inserted" << endl;
            break;
        }
    }
}