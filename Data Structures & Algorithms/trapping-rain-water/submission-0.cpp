class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int l = 0, r = height.size() - 1;
        int lval = height[l], rval = height[r];
        int res = 0;

        while (l < r) {
            if (lval < rval) {
                l++;
                lval=max(lval, height[l]);
                res += lval - height[l];
            } else {
                r--;
                rval = max(rval, height[r]);
                res += rval - height[r];
            }
        }
        return res;
    }
};
