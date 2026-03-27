#include <iostream>

using namespace std;

int numbers[20];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tc;
    cin >> tc;
    for (int j = 0; j < tc; j++)
    {
        cin >> n;
        numbers[1] = 1;
        numbers[2] = 2;
        numbers[3] = 4;
        for (int i = 4; i <= n; i++)
        {
            int value = numbers[i - 1] + numbers[i -2] + numbers[i - 3];
            numbers[i] = value;
        }
        cout << numbers[n] << "\n";
    }

    return 0;
}