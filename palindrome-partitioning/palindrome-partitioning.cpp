class Solution {
public:
    vector<vector<string>> ans;
    vector<string> sub_ans;
        
    bool isPalindrome(int start, int end, string s){
            while(start<=end){
                    if(s[start]!=s[end]){
                            return false;
                    }
                    start++; end--;
            }
            return true;
    }
    void solve(int index, string s ){
            if(index == s.size()){
                    ans.push_back(sub_ans);
                    return;
            }
            
            for(int i=index;i<s.size();i++){
                    if(isPalindrome(index,i, s)){
                            sub_ans.push_back(s.substr(index,i-index+1));
                            solve(i+1,s);
                            sub_ans.pop_back();
                            
                    }
            }
    }
    vector<vector<string>> partition(string s) {
        solve(0, s);
            return ans;
    }
};