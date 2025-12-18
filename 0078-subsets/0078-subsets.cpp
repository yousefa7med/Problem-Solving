class Solution {
public:
vector<vector<int>> result;
vector<int> current;
void backTrack(vector<int>& nums, int start){
result.push_back(current);
for(int i=start;i<nums.size();i++){

    current.push_back(nums[i]);
backTrack(nums,i+1);
current.pop_back();



}








}

    vector<vector<int>> subsets(vector<int>& nums) {
        backTrack(nums,0);
        return result;
    }
};