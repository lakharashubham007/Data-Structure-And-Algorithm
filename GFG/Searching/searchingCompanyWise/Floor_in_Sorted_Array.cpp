#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x)
    {

        long long int lo = 0, hi = n - 1, mid, ans = -1;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (v[mid] == x)
                return mid;
            else if (v[mid] > x)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}