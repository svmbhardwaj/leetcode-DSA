class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int x = nums[0];

        for (int num : nums) {
            while (x < num) {
                ans.push_back(x);
                x++;
            }
            if (num == x) x++;
        }

        return ans;
    }
};