#include <bits/stdc++.h>

using namespace std;

int get(int n)
{
    // create var mask its bin val.= (000000..00)
    int mask = 0;

    // run loop while mask less then input num.
    while (mask < n)
    {
        // * (000..00) = left shift(0000..00(OR 1) mask become (000001))
        // * (000..01) =left shift(0000..10(OR 1) mask become (000011))
        // * (000..11) =left shift(0000..100(OR 1) mask become (000111))
        mask = (mask << 1) | 1;
    }
    // after exit loop mask became (0000...111)
    // here n = (000..101)  , (~n) = (1111...010)
    // finally we AND (~n) with mask = (11111...101)&(0000...111) => (0000..010)
    return ((~n) & mask);
}
int main()
{
    int n;
    cin >> n;
    cout << get(n);
}
