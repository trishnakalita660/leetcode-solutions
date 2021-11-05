class Solution {
public:

    // Encodes a URL to a shortened URL.

    unordered_map<string, string> map;

    string encode(string longUrl) {
            
            auto x = longUrl.length();
            string shortUr = "";
            string hash = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
            while(x){
                    shortUr+= hash[62%x];
                    x= x/62;
            }
            
            if(map.find(shortUr) == map.end()){
                    map[shortUr] = longUrl; 
            }
            return shortUr;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));