#include <iostream>

using namespace std;

#define X first 
#define Y second 

int board[502][502];
bool vis[502][502];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<pair<int, int>> Q;
    vis[0][0] = 1;
    Q.push({0, 0});
    while(!Q.empty())
    {
        pair <int, int> cur = Q.front(); 
        Q.pop();
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if(vis[nx][ny]|| board[nx][ny] != 1)
        }
    }
}