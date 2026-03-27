#include <iostream>
#include <algorithm>

using namespace std;

int sum[1002][3]; // n번째까지의 비용 합, 마지막에 칠한 RGB컬러 0이 R, 1이 G, 2가 B
int R[1002];
int G[1002];
int B[1002];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> R[i] >> G[i] >> B[i];
    }

    sum[1][0] = R[1];
    sum[1][1] = G[1];
    sum[1][2] = B[1];

    for (int i = 2; i <= n; i++)
    {
        sum[i][0] = min(sum[i - 1][1], sum[i - 1][2]) + R[i];
        sum[i][1] = min(sum[i - 1][0], sum[i - 1][2]) + G[i];
        sum[i][2] = min(sum[i - 1][0], sum[i - 1][1]) + B[i];
    }
    
    cout << min({sum[n][0], sum[n][1], sum[n][2]});

    return 0;
}