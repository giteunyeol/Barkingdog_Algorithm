#include <iostream>
#include <algorithm>

using namespace std;

int dp[100002];
int score[100002];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        score[i] = k;        
    }

    dp[1] = score[1];
    for(int i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 1] + score[i], score[i]);
    }

    cout << *max_element(dp + 1, dp + n + 1);
    return 0;
}