class Solution {
public:
    string toLowerCase(string s) {
        string str = s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);      
        return s;
        
    }
};