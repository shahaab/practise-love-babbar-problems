// reversing array here can be done by creating a new array and then
// getting the size of the first array
// then running a for loop and storing the value in a opposite loop

// using iterative way

/*#include <bits/stdc++.h>

using namespace std;

void reversearray(int array[], int start, int end){
    while(start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

void printarray(int array[], int n){
    for(int i=0; i<n; i++) {
        cout << array[i] << " ";

    }   cout << endl;
}


int main() {
    //char a[] = {'G','e','e','k','s'};

    int a[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(a)/sizeof(a[0]);

    printarray(a, n);
    reversearray(a, 0, n-1);

    cout << "reveresed array is" << endl;

    printarray(a, n);
    return 0;
}

*/

// using recursion

#include <bits/stdc++.h>

using namespace std;

void reversearray(int array[], int start, int end)
{
    if (start >= end)
        return;
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    reversearray(array, start + 1, end - 1);
}

void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    //char a[] = {'G','e','e','k','s'};

    int a[] = {1, 2, 3, 4, 5, 6};

    printarray(a, 6);
    reversearray(a, 0, 5);

    cout << "reveresed array is" << endl;

    printarray(a, 6);
    return 0;
}
