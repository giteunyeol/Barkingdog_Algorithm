#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string word;
    cin >> word;
    int save[26] = {0};
    for(int i = 0; i < word.size(); i++)
    {
        save[word[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        cout << save[i] << " ";
    }

    return 0;
}