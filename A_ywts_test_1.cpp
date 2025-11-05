#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& nums, int target, int start, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }
    for (int i = start; i < nums.size(); i++) {
        if (i > start && nums[i] == nums[i - 1]) continue; // skip duplicates
        if (nums[i] > target) break; // stop if sum exceeds target
        current.push_back(nums[i]);
        backtrack(nums, target - nums[i], i + 1, current, result);
        current.pop_back();
    }
}

int main() {
    int n, target;
    cin >> n;
    vector<int> candidates(n);
    for (int i = 0; i < n; i++) cin >> candidates[i];
    cin >> target;

    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> current;

    backtrack(candidates, target, 0, current, result);

    for (auto& comb : result) {
        cout << "[";
        for (int i = 0; i < comb.size(); i++) {
            cout << comb[i];
            if (i != comb.size() - 1) cout << ",";
        }
        cout << "]\n";
    }

    return 0;
}
