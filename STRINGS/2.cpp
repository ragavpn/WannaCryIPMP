#include <bits/stdc++.h>
using namespace std;

// Permutation of a string

void permute(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permute(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main()
{
    string s = "ABCDE";
    permute(s, 0, s.length() - 1);
    return 0;
}