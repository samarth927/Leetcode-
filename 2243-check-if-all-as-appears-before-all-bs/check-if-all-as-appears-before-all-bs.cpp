class Solution {
public:
    bool checkString(string s) {
       int n = s.size();
       int ascii = 97;
       for(int i=0;i<n;i++){
        char ch = s[i];
        int str = (int)ch;
        if(str == ascii) continue;
        else ascii++;
       } 
       if(ascii > 98) return false;
       return true;
    }
};