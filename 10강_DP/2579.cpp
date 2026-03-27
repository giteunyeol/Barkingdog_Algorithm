#include <iostream>

using namespace std;

int score[302]; //현재 계단의 점수
int sum[302]; //지금까지의 최대 합

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        score[i] = temp;
    }

    sum[0] = score[0];
    sum[1] = score[0] + score[1];
    sum[2] = max(score[0] + score[2], score[1] + score[2]);

    for(int i = 3; i < n; i++)
    {
        sum[i] = score[i] + score[i - 1] + sum[i - 3];
        sum[i] = max(sum[i], sum[i - 2] + score[i]); 
    }
    cout << sum[n - 1];

    return 0;
}