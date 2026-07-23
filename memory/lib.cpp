#include <iostream>
#include <span>
#include <array>
#include <string>

using namespace std;

// not_null concept
// to demonstrate we use strlen() function

int strlen(const char *p)
{
    if (p == nullptr)
    {
        return 0;
    }
    int n = 0;
    while (*p++)
    {
        ++n;
    }
    return n;
}

void testq(std::span<int> s)
{
    cout << "size: " << s.size() << '\n';
}