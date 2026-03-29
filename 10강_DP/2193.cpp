#include <iostream>

using namespace std;

long long dp[100][100]; //0번 인덱스가 i번째까지, 1번 인덱스가 0이나 1을 골랐는지

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    dp[1][1] = 1;
    dp[1][0] = 0;

    dp[2][1] = 0;
    dp[2][0] = 1;
    
    for(int i = 3; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][0];
        dp[i][0] = dp[i - 1][1] + dp[i - 1][0];
    }

    cout << dp[n][1] + dp[n][0];

    return 0;
}