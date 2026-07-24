#include <iostream>
using namespace std;

bool isPalindrome(string str, int left, int right)
{
    // Base Case
    if (left >= right)
        return true;

    // Characters match nahi karte
    if (str[left] != str[right])
        return false;

    // Recursive Call
    return isPalindrome(str, left + 1, right - 1);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}