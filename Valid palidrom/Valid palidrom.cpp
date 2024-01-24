#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
    int l;
    string a1;
    for (auto i : s)
    { if (isalnum(i))
            a1.push_back(tolower(i)); }
    l = a1.size();
    
    for (int i(0); i < l/2; ++i)
    {if (a1[i] != a1[l-i-1]) return false; }
    return true;
}

int main()
{
    setlocale(LC_ALL, "ru");
    string s;
    cout << "Введите фразу: ";
    cin >> s;
    if (isPalindrome(s) == true)
        cout << "\ntrue";
    else
        cout << "\nfalse";
}
