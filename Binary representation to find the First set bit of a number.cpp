#include <bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    // Function to find the position of the first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        vector<int> a;
        if(n == 0)
        {
            return 0;
        }
        while(n != 0)
        {
            int rem = n % 2;
            a.push_back(rem);
            n = n / 2;
        }
        reverse(a.begin(), a.end());
        long long int count = 0;
        for(int i = a.size() - 1; i >= 0; i--)
        {
            if(a[i] != 1)
            {
                count++;
            }
            else
            {
                return count + 1;
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n));
    }
    return 0;
}
