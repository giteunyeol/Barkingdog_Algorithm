#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int value = 1;
    while(value <= n)
    {
        value = value * 2;
    }
    cout << value / 2;
    return 0;
}