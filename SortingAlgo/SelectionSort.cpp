#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, mn_idx;
    for (i = 0; i < n - 1; i++)
    {
        mn_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mn_idx])
            {
                mn_idx = j;
            }
        }

        if (mn_idx != i)
        {
            swap(&arr[mn_idx], &arr[i]);
        }
    }
}

int main()
{
    int n;
    cout << "Size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}