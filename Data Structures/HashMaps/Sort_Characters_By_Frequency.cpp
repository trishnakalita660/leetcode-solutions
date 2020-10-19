class Solution {
public:
        
    string frequencySort(string s) {
      
      if(s.size() == 0)	 return "";

           unordered_map<char,int> counter;
           for(auto x : s){
               counter[x]++;
                   
           } 
            sort(s.begin(),s.end(),
        	[&](char a, char b){return counter[a] > counter[b] || (counter[a] == counter[b] && a < b);}
        	);
            return s;
    }
        
     
};