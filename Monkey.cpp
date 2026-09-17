#include <bits/stdc++.h>
using namespace std;

class Word
{
public:
    int *count;

    Word()
    {
        count = new int[26];
        for (int i = 0; i < 26; i++)
            count[i] = 0;
    }

    void input(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                count[s[i] - 'a']++;
        }
    }

    void print()
    {
        for (int i = 0; i < 26; i++)
        {
            while (count[i] > 0)
            {
                cout << char(i + 'a');
                count[i]--;
            }
        }
        cout << endl;
    }

    ~Word()
    {
        delete[] count;
    }
};

int main()
{
    string line;

    while (getline(cin, line))
    {
        Word obj;
        obj.input(line);
        obj.print();
    }

    return 0;
}
