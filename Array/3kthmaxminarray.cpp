// simplest method didnt do it using sorting technique as  i dont know it yet. learned from geeksforgeeks for more refer here: https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
#include <algorithm>
#include <iostream>

using namespace std;

int kthsmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;

    cout << "Kth smallest element is " << kthsmallest(arr, n, k);
    return 0;
}
