#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[102][102];
bool vis[102][102];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue <pair <int, int>> Q;
    Q.push({0, 0});
    vis[0][0] = true;

    while(!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        
    }

    return 0;
}