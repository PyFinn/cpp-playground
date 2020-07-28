#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std::string;
using std::for_each;
using std::tolower;

bool isPalindrome(string s) {
    for_each(s.begin(), s.end(), [] (char &c) {
        c = tolower(c);
    });
    if (s.size() <= 1)
    {
        return true;
    }
    if (s[0] != s[s.size() - 1])
    {
        return false;
    }
    return isPalindrome(s.substr(1,s.size() - 2));
}

int main() {
    string word = "Otto";
    bool a = isPalindrome(word);
    cout << a << "\n";
}