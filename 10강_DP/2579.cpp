#include <iostream>

using namespace std;

int stairs[302];
int max[302]; //n번째일때 최대점수

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> stairs[i]; //각 계단의 점수
    }
    stairs[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        
    }
    return 0;
}