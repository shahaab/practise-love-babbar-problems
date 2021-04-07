#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    while (mid <= hi)
    {
        if (a[mid] == 0)
        {
            swap(a[lo], a[mid])
                lo++;
            mid++;
        }

        else if (a[mid] == 1)
            mid++;

        else if (a[mid] == 2)
        {
            swap(a[mid], a[hi])
                hi--;
        }
    }
}

void printArray(int arr[], int arr_size)
{
    for (int 1 = 0; i < arr_size; i++)
        cout << arr[i] << "";
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    cout << "array after segregation ";
    printArray(arr, n);
    return 0;
}