#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

//이름이 이름인 만큼, 7명의 여학생들로 구성되어야 한다. -> cur가 7되면 리턴
//강한 결속력을 위해, 7명의 자리는 서로 가로나 세로로 반드시 인접해 있어야 한다. -> BFS, 백트래킹이니까 DFS로 해야하나?
//화합과 번영을 위해, 반드시 ‘이다솜파’의 학생들로만 구성될 필요는 없다. -> 섞일 수 있음.
//그러나 생존을 위해, ‘이다솜파’가 반드시 우위를 점해야 한다. 따라서 7명의 학생 중 ‘이다솜파’의 학생이 적어도 4명 이상은 반드시 포함되어 있어야 한다. 
//-> 총 7명이기 때문에, Y가 4가 되버릴때 리턴하면 될듯. S는 몇개던 상관없음. Y count변수를 따로 만들어서 관리

#define X first 
#define Y second 

int dx[4] = {1, 0, -1, 0}; //방향벡터 재료
int dy[4] = {0, 1, 0, -1};

bool vis[5][5]; // 방문한지 안한지 

string board[5]; 
int ans = 0; //모든 경우의 수는 최댓값이니, ans에 갱신
int cnt = 0; // 현재 몇명 경우의수인지

void BFS(int x, int y)
{
    queue<pair<int, int>> Q;
    Q.push({x, y});
    vis[x][y] = true;

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5)
            {
                continue;
            } // board의 크기가 5 * 5이기 때문에
            if (vis[nx][ny])
            {
                continue;
            } // 방문했으면 컨티뉴
            vis[nx][ny] = true;
            Q.push({nx, ny});
        }
    } 
}

void solve(int x, int y, int cur, int Y_count) //x는 아래방향, y는 우측방향 진행. 각각 board의 좌표. cur는 현재 몇칸 갔는지, Y_count는 임도연파의 수
{
    if(cur == 7) //7개를 다 셀렉하면 최댓값을 갱신하고 리턴함.
    {
        ans = max(ans, cnt);
        return;
    }
    if(Y_count >= 4) { return; } // 임도연파가 4명 이상이면 더 탐색할 필요 없으니 바로 리턴
    //현재 좌표에서 bfs를 돌림
    BFS(x, y); //BFS를 돌리는 함수
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i = 0; i < 5; i++)
    {
        cin >> board[i];
    }
    
    //좌표를 모든 지점에서 시작해야할 듯?
    for(int i = 0; i < 5; i++) // board : 5 * 5
    {
        for(int j = 0; j < 5; j++)
        {
            solve(i, j, 0, 0);
        }
    }
    
    cout << ans;

    return 0;
}