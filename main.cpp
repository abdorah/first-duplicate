#include <iostream>
#include "function.cpp"

using namespace std;

int main()
{
    char str[30];
    int result;
    cout << "enter your string:" << endl;
    cin >> str;
    result = function(str);
    if (result != 0)
    {
        cout << (char)result << endl;
    }
    else
    {
        cout << "NULL" << endl;
    }
    return 0;
}