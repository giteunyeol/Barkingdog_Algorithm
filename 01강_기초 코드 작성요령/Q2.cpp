#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        arr.push_back(number);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == 100)
            {
                cout << "1";
                exit(0);
            }
        }
    }
    cout << "0";
    return 0;
}