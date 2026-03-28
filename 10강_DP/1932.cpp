#include <iostream>
#include <algorithm>

using namespace std;

int triangle[502][502];
int dp[502][502];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cin >> triangle[i][j];
        }
    }

    dp[0][0] = triangle[0][0]; //n번째 줄까지 갔을때 맥스합
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            if(j == 0)
            {
                dp[i][j] = dp[i - 1][j] + triangle[i][j];
                continue;
            }
            else if (j == i)
            {
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                continue;
            }
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
        }
    }

    int max = dp[n-1][0];
    for(int i = 1; i < n; i++)
    {
        if(max < dp[n-1][i]) { max = dp[n-1][i]; }
    }
    cout << max;

    return 0;
}