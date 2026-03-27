#include <iostream>

using namespace std;

int arr[1000002];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    arr[1] = 0; 
    for(int i = 2; i <= n; i++)
    {
        int value = arr[i - 1] + 1;
        if(i % 2 == 0)
        {
            value = min(value, arr[i / 2] + 1);
        }
        if(i % 3 == 0)
        {
            value = min(value, arr[i / 3] + 1);
        }
        arr[i] = value;
    }
    cout << arr[n];
    return 0;
}