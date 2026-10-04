class Solution {
public:
    int minRotations(string s) {
        int n = s.size();
        int current =0;
        int rotation =0;
        for(int i=0;i<n;i++){
            int val = s[i] - '0';
            int diff = abs(current - val);
            int step = min(diff, 10 - diff);
            rotation += step;
            current = val;
        }
        return rotation;
    }
};