#include <iostream>
using namespace std;

int findPattern(const string text, const string pattern)
{
    if (pattern == "")
        return -1; //  empty pattern

    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i <= n - m; i++)
    {
        if (text.substr(i, m) == pattern)
        {
            return i; // Match found 
        }
    }

    return -1; // Pattern not found
}
int main()
{
    cout << "Test 1 (pattern in the beginning): " << findPattern("abcde", "abc") << endl;
    cout << "Test 2 (pattern in the end): " << findPattern("hello world", "world") << endl;
    cout << "Test 3 (not present): " << findPattern("abcdef", "xyz") << endl;
    cout << "Test 4 (empty pattern): " << findPattern("abcdef", "") << endl;

    return 0;
}

