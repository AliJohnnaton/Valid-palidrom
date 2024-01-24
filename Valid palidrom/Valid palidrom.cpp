#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
    int l2;
    string a;
    for (auto i : s)
    { if (isalnum(i))
            a.push_back(tolower(i)); }
    l2 = a.size();
    
    for (int i(0); i < l2/2; ++i)
    {if (a[i] != a[l2-i-1]) return false; }
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
