// 14. Longest Common Prefix

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sol code here --
    class Solution
    {
    public:
        string longestCommonPrefix(vector<string> &str)
        {
            string ans = "";
            sort(str.begin(), str.end());
            int n = str.size();
            string first = str[0], last = str[n - 1];
            for (int i = 0; i < min(first.size(), last.size()); i++)
            {
                if (first[i] != last[i])
                {
                    return ans;
                }
                ans += first[i];
            }
            return ans;
        }
    };

    return 0;
}