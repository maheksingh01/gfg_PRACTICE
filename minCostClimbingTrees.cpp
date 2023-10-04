#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost, int N, int i = 0)
    {
        vector<int> dp(N, -1);
        auto solve = [&](auto self, int i) -> int
        {
            if (i >= N)
            {
                return 0;
            }
            if (dp[i] != -1)
                return dp[i];
            return dp[i] = cost[i] + min(self(self, i + 1), self(self, i + 2));
        };
        return min(solve(solve, 0), solve(solve, 1));
    }
};