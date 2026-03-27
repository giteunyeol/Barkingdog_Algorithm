#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int count = 0;
    cin >> n;
    for(int i = 3; i <= n; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            count += i;
        }
    }

    cout << count;

    return 0;
}