#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
    int l,m;
    string a;
    for (auto i : s)
    {
        if ((i > 64 && i < 91) || (i > 96 && i < 123)||(i>47&&i<58))
        {
            a.push_back(tolower(i));
        }
    }
    l = a.size();
    m = l / 2;
    if (m % 2 != 0)
        m + 1;
    for (int i(0), j(l - 1); i < m; ++i, --j)
    {
        if (a[i] != a[j])
            return false;
    }
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
