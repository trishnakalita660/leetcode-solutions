class Solution {
public:
   
    struct TrieNode{
      TrieNode* child[26];
            string word;
            
    TrieNode(): word(""){
            for(int i=0;i<26;i++){
                    child[i]=NULL;
            }
     }
    };
        
        TrieNode* buildTrie(vector<string>& words){
                TrieNode* root = new TrieNode();
                for(int j=0; j<words.size();j++){
                        string word = words[j];
                        TrieNode* curr = root;
                        for(int i=0;i<word.size();i++){
                                char c = word[i]-'a';
                                if(!curr->child[c]){
                                        curr->child[c] = new TrieNode();
                                }
                                curr = curr->child[c];
                        }
                        curr->word = word;
                }
                return root;
        }
         
        void dfs(vector<vector<char>>& board, vector<string>& ans, int i, int j, TrieNode* p){
                char c= board[i][j];
                if(c=='$' || !p->child[c-'a']) return;
                
                p=p->child[c-'a'];
                if(p->word.size()>0){
                        ans.push_back(p->word);
                        p->word = "";
                }
                board[i][j]='$';
                if(i>0) dfs(board, ans,i-1,j,p);
                
                if(j>0) dfs(board, ans,i,j-1,p);
                if(i<board.size()-1) dfs(board, ans,i+1,j,p);
                if(j<board[0].size()-1) dfs(board, ans,i,j+1,p);
                 board[i][j] = c;
        }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
                
                TrieNode* root = buildTrie(words);
                vector<string>ans;
                for(int i=0;i<board.size();i++){
                        for(int j=0;j<board[0].size();j++){
                                dfs(board, ans, i, j, root);
                        }
                }
        return ans;
    }
};


 