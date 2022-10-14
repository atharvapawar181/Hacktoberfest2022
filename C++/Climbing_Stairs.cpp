             // TOP-BOTTOM APProach. // 

// int solve1(long long nStairs, int i, vector<int>& dp)
// {
//     if(i==nStairs)
//     {
//         return 1;
//     }
//     if(i>nStairs)
//     {
//         return 0;
//     }
//     if(dp[nStairs]!=-1)
//     {
//         return dp[nStairs];
//     }
//     dp[i] = (solve1(nStairs,i+1,dp) + solve1(nStairs,i+2,dp));
//     return dp[i];
// } 

        // DP approach BOTTOM-TOP APPROACH //   

int solve2(long long n)
{
    vector<long long >dp(n+1);
    dp[0]=1; 
    dp[1]=1;
    for(int i =2; i<=n; i++)
    {
        dp[i]=(dp[i-1]+dp[i-2]);
    }
    return dp[n];
}



class Solution {
public:
    int climbStairs(int n) {
        int ans = solve2(n);
        return ans ;
        
        
        
//          // SPACE OPTIMISATON //
//      long long first = 1;
//     long long second = 1;
//      if(n==0)
//         {
//             return 1;
//         }
    
//     for(int i =2; i<=n; i++)
//     {
//         long long  curr = (first + second);
//          second = first;
//         first = curr;
//     }
//     return first ;  
    }
};
