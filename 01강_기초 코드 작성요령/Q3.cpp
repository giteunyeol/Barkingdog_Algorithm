#include <iostream>

using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    long long number = sqrt(n);
    if(number * number == n) cout << "1";
    else cout << "0";
    return 0;
}