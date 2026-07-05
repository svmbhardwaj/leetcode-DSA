class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(nums.size());
        int p = 0;
        int n = 1;

        for (int x : nums) {
            if (x > 0) {
                arr[p] = x;
                p += 2;
            } else {
                arr[n] = x;
                n += 2;
            }
        }
        return arr;
    }
};