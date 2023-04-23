#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[q + 1 + j];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void Sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        Sort(arr, l, m);
        Sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

// Driver program
int main()
{
    int n;
    cout << "Enter size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Sort(arr, 0, n - 1);

    cout << "Sorted array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}