class Solution {
public:
    bool isPalindrome(string s) {
        string n = ""; 
        for(char c : s){
            if(isalnum(c)){
                n+=tolower(c);
            }
        }
        return n==string(n.rbegin(), n.rend());
    }
};
