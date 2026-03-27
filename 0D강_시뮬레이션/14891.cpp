#include <iostream>

using namespace std;

string wheel_save[5]; //편하게 하나 더 생성해서 톱니 번호랑 맞춤. 0을 비워둠

void spin(int cur, int dir) // 실제로 회전하는 함수. 현재 바퀴와 방향을 받아옴
{
    // 현재 바퀴 한칸 회전
    if (dir == 1) // 시계방향으로 회전
    {
        // 스트링을 오른쪽으로 한칸 밀어야함, 각 톱니바퀴는 8칸임.
        char temp = wheel_save[cur][7]; // 현재 바퀴의 제일 오른쪽을 temp에 넣어놓음.
        for (int i = 7; i >= 1; i--)    // 역순으로 세이브 넣어줌
        {
            wheel_save[cur][i] = wheel_save[cur][i - 1];
        }
        wheel_save[cur][0] = temp; // 0번째 휠은 temp에 넣어뒀던걸 넣어줌
    }
    else // 반시계방향 회전
    {
        // 왼쪽으로 한칸 밈
        char temp = wheel_save[cur][0];
        for (int i = 0; i < 7; i++)
        {
            wheel_save[cur][i] = wheel_save[cur][i + 1];
        }
        wheel_save[cur][7] = temp;
    }
}

bool distinction(bool dir, ) // 판별을 회전하기 전에 미리 해놓는 함수. true가 나오면 그쪽 방향 톱니를 돌림.
{
    
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= 4; i++)
    {
        cin >> wheel_save[i];
    }

    int k; 
    cin >> k;

    //k번만큼 spin을 돌림
    for(int i = 0; i < k; i++)
    {
        int cur_wheel, dir;
        cin >> cur_wheel >> dir;
        //판별->회전순서로 반복
        distinction(0, ) //left = 불리언값0, right = 불리언값1
    }

    int ans = 0;
    for(int i = 1; i <= 4; i++)
    {
        int st = 1;
        if(wheel_save[i][0] == '1') // s극인경우
        {
            int temp = st << (i - 1);
            ans += temp;
        }
    }

    cout << ans;

    return 0;
}