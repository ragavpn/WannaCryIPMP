#include <bits/stdc++.h>
using namespace std;

//Reverse words in a string

void reverseWords(string s){
    int start = 0;
    for(int end=0; end<s.length(); end++){
        if(s[end] == ' '){
            reverse(s.begin()+start, s.begin()+end);
            start = end+1;
        }
    }
    reverse(s.begin()+start, s.end());
    reverse(s.begin(), s.end());
    cout << s << endl;
}