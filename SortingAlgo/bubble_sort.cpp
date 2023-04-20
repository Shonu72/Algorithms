#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    int cnt = 1;
    while (cnt < n)
    {
        for (int i = 0; i < n - cnt; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        cnt++;
    }
}

main()
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
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}