class Solution {
public:
    // vector<vector<int>> result;
    // vector<int> current;

    // void backtrack(int start, int n, int k) {
    //     if (current.size() == k) {
    //         result.push_back(current);
    //         return;
    //     }
    //     for (int i = start; i <= n; i++) {
    //         current.push_back(i);
    //         backtrack(i + 1, n, k);
    //         current.pop_back();
    //     }
    // }


        vector<vector<int>> result;
vector<int> current;
void backTrack(int n,int k, int start){
if(current.size()==k){
result.push_back(current);
return;

}

for(int i=start;i<=n;i++){
current.push_back(i);
backTrack(n,k,i+1);
current.pop_back();
}







}

    vector<vector<int>> combine(int n, int k) {

        backTrack( n, k,1);

        return result;
    }
};