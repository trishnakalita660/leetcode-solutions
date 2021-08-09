class Solution {
public:
    int myAtoi(string s) {
         const int n = s.size();
        int sign = 1; 
        int i = 0;
        long long sum = 0;
        while(s[i] == ' '&& i < n) i++;
        if(s[i] == '+') i++;
        else if(s[i] == '-') i++, sign = -1;
        for(;i < n;i++){
            if(s[i] < '0' or s[i] > '9') break;
            sum = sum * 10 + (s[i] - '0');
            if(sum > INT_MAX) return sign == 1 ? INT_MAX : INT_MIN;
        }
        return sign == 1 ? sum : sum * sign;
    }
};