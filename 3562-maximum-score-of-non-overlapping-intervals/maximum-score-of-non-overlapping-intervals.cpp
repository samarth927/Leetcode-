class Solution {
public:
    struct Node {
        int s, e, w, id;
    };

    struct State {
        long long wt;
        vector<int> idx;
    };

    vector<Node> arr;
    vector<vector<State>> dp;
    vector<vector<int>> vis;
    int n;

    // Compare two states
    bool better(State &a, State &b) {
        if (a.wt != b.wt) return a.wt > b.wt;
        return a.idx < b.idx;
    }

    State solve(int i, int k) {
        if (i == n || k == 0) return {0, {}};

        if (vis[i][k]) return dp[i][k];
        vis[i][k] = 1;

        // Skip current interval
        State ans = solve(i + 1, k);

        // Find next non-overlapping interval
        int l = i + 1, r = n - 1, nxt = n;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid].s > arr[i].e) {
                nxt = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        // Take current interval
        State take = solve(nxt, k - 1);
        take.wt += arr[i].w;
        take.idx.push_back(arr[i].id);
        sort(take.idx.begin(), take.idx.end());

        if (better(take, ans)) ans = take;

        return dp[i][k] = ans;
    }

    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        n = intervals.size();

        for (int i = 0; i < n; i++) {
            arr.push_back({intervals[i][0], intervals[i][1],
                           intervals[i][2], i});
        }

        sort(arr.begin(), arr.end(), [](Node &a, Node &b) {
            if (a.s != b.s) return a.s < b.s;
            if (a.e != b.e) return a.e < b.e;
            return a.id < b.id;
        });

        dp.assign(n + 1, vector<State>(5));
        vis.assign(n + 1, vector<int>(5, 0));

        return solve(0, 4).idx;
    }
};