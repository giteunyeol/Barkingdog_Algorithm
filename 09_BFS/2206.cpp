#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

#define X first 
#define Y second

string board[1002];
int dist1[1002][1002]; // 가장 디폴트 dist

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //0이 이동 가능, 1이 이동 불가
    //시작하는 칸, 끝나는 칸 포함.
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        //n이 행의 갯수, m이 열의 갯수
        fill(dist1[i], dist1[i] + m, -1);
    }
    //도착지가 (n, m)으로 고정
    queue<pair<int, int>> Q;
    dist1[0][0] = 0;
    Q.push({0, 0});
    
    while(!Q.empty())
    {
        pair<int, int> cur = Q.front();
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(n < 0 || nx >= n || ny < 0 || ny >= 0) { continue; } // 1이랑 0 일때 지나갈 수 있는 경우도 
            if(dist1 >= 0 ) { continue; } 
            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }

    //한칸만 뚫으면 도착할 수 있는 엣지케이스가 따로 있음
    int minimum = dist1[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            
        }
    }

    return 0;
}