#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1000000007;
        long long total = 0;
        vector<long long> end(26, 0); // tracks subsequences ending with each char

        for (char ch : s) {
            int index = ch - 'a';
            long long newSubsequence = (total + 1 - end[index] + MOD) % MOD;
            total = (total + newSubsequence) % MOD;
            end[index] = (end[index] + newSubsequence) % MOD;
        }
        return (int)total;
    }
};