#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    fill(arr, arr + 10, 1);
    for(int i = 0; i < m; i++)
    {
        arr[i] = 0;
    }

    do{
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                cout << i + 1 << " ";
            }
        }
        cout << "\n";
    }while(next_permutation(arr, arr + n));

    return 0;
}

/*
#include <iostream>

using namespace std;

int n, m;
int arr[10];

void solve(int k, int number) // k는 현재 배열을 몇개 채웠는지, number는 현재 수
{
    if (k == m) // basecase
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = number; i <= n; i++)
    {
        arr[k] = i;
        solve(k + 1, i + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    solve(0, 1);

    return 0;
}
*/