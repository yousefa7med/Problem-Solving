class Solution {

public:
    vector<string> result;

void backTrack(int n, int open,int close,string s){
if(s.size()==2*n)
{

    result.push_back(s);
    return;
}
if(open<n){
backTrack(n,open+1,close,s+"(");

}
if(close<open){
    backTrack(n,open,close+1,s+")");

}



}





// void backTrack(string current,int open, int close , int n  ){
// if(current.size()==2*n){
//     result.push_back(current);
//     return;
// }
// if(open<n){
//     backTrack(current+"(",open+1,close,n);
// }
// if(close<open){
//     backTrack(current+")",open,close+1,n);
// }


// }


    vector<string> generateParenthesis(int n) {
backTrack(n,0,0,"");
return result;

    }
};