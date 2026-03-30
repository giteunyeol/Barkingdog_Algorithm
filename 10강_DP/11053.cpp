#include <iostream>
#include <algorithm>

using namespace std;

int score[1002];
int dp[1002];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    for(int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(score[i] > score[j])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    cout << *max_element(dp, dp + n);
    return 0;
}