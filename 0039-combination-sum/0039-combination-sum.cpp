class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;
    void backTrack(vector<int>& candidates, int target, int start) {

        if (target == 0) {
            result.push_back(current);

            // current.pop_back();
            return;
        }

        if (target < 0) {
            // current.pop_back();
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            backTrack(candidates, target - candidates[i], i);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        backTrack(candidates, target, 0);

        return result;
    }
};