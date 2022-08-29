#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int n, int counter)
    {
        if (counter <= n)
        {
            if (n % counter == 0)
                return false;

            // position after delete
            n = n - n / counter;
            counter++;
            return check(n, counter);
        }
        else
            return true;
    }
    bool isLucky(int n)
    {
        return check(n, 2);
    }
};

signed main()
{

    int n;
    cin >> n;

    Solution obj;

    if (obj.isLucky(n))
        cout << n <<" WOW It's Lucky number !\n";
    else
        cout<< n << " Not Lucky number\n";
}