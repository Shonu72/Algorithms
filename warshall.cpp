#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int j = 1; j <= n; j++)
    {
        int a, b;
        cin >> a >> b;

        arr[a][b] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}