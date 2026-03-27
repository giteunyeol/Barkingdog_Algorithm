#include <iostream>
#include <vector>

using namespace std;

int board[2200][2200];

int cut(int number, int n) // 현재 판별할 수, 현재 몇번째 3의 n제곱인지
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    
    // 1, 0, 1넘긴 3개 결과 하면 될듯? 
    cout << cut(-1, n);
    cout << cut(0, n);
    cout << cut(1, n);
}