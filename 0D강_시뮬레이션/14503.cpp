#include <iostream>

using namespace std;

#define X first 
#define Y second 

int board_wall[52][52]; // 벽을 저장
bool board_clear[52][52]; // 현재 치워진지 안치워진지 판별. 디폴트값이 폴스, 치워지지 않은경우

pair <int, int> robot_coordinate; //로봇의 현재 좌표
int robot_see; //로봇이 바라보는 방향, 0 ~ 3까지의 값을 가짐. ex) robot_see가 0의 값을 가지면 북쪽을 봄, dx, dy값에 로봇_see값을 더해줌. 

int dx[4] = {-1, 0, -1, 0};//북, 동, 남, 서
int dy[4] = {0, 1, 0, -1};

void conduct_fun(int r, int c) //1, 2, 3번 함수를 작동하는 알고리즘
{
    if(board_clear[r][c] == false) // 치워지지 않은 경우면.
    {
        func1(r, c);
    }
    if() // func2
    {
        //주변 4칸 중 청소되지 않은 빈 칸이 없는 경우
        bool flag = //다 청소된 경우
        board_clear[r][c]
        int back_dir; // 뒤 보는 방향

    }
    else() // func3
    {

    }
}

void func1(int r, int c) //현재 칸을 청소. 작동 1번케이스
{
    board_clear[r][c] = true; //청소. 이미 판별을 하고 들어왔기때문에 함수 내부에서 판별할 필요가 없다.
}

void func2(int r, int c) //2번 함수
{

}

void func3(int r, int c)
{
    // 1. 반시계로 90도 회전 
    // 2. 바라보는 방향을 기준으로 앞쪽 칸이 청소되지 않은 빈 칸인 경우 한 칸 전진한다.
    
    
    // 3. 1번으로 돌아간다

}

bool four_area_dirty(int r, int c) // 상 하 좌 우 주변 4칸이 깨끗한지 판별하는 함수, 따로 빼놓음
{
    //깨끗하면 트루를 리턴하고, 더러우면 폴스를 리턴함
    for(int dir = 0; dir < 4; dir++)
    {
        int nx = board_clear[r][c] + dx[dir];
    }
    return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m; //n이 행의 길이, m이 열의 길이
    cin >> robot_coordinate.X >> robot_coordinate.Y >> robot_see; // 로봇의 행, 열좌표, 로봇이 보는방향
    int start_trash = 0, finish_trash = 0; // 시작할때 쓰레기의 갯수, 끝날때의 쓰레기 갯수, 마지막에 후자에서 전자를 뺀게 답
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> board_wall[i][j]; //i, j 입력
            board_wall[i][j] = board_clear[i][j]; //처음에 복사해서 저장해줌
            if(board_clear[i][j] == 1)
            {

            }
        }
    }

    //마지막에 답을 냄
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
        }
    }

    return 0;
}