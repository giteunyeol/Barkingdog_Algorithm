#include <iostream>

using namespace std;

int arr[10];
bool used[10];

int n, m;

void solve(int k)
{
    if (k == m) // 끝까지 도달하면
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            arr[k] = i;
            used[i] = true;
            solve(k + 1);
            used[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    solve(0);

    return 0;
}
