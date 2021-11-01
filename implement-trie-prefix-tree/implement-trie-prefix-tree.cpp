class Trie {
public:
    class TrieNode{
          public:  
            unordered_map<char, TrieNode*>child;
            bool end;
            
             
    };
        TrieNode* trie;
    Trie() {
            trie = new TrieNode();
        
    }
    
    void insert(string word) {
        TrieNode* it = trie;
            for(auto x: word){
                    if(it->child[x-'a']== NULL){
                            it->child[x-'a'] = new TrieNode();
                            
                    }
                    it= it->child[x-'a'];
            }
            it->end = true;
    }
    
    bool search(string word) {
            
            TrieNode* it = trie;
            for(auto x: word){
                    if(it->child[x-'a'] == NULL){
                            return false;
                    }
                    it = it->child[x-'a'];
            }
            
            return it->end;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* it = trie;
            for(auto x: prefix){
                    if(it->child[x-'a'] == NULL){
                            return false;
                    }
                    it = it->child[x-'a'];
            }
            return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */