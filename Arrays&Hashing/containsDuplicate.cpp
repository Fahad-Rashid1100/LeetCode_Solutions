class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int x = 0 ; x < nums.size() - 1 ; x++) {
            if(nums[x] == nums[x+1]) {
                return true;
            }
        }

        return false;
    }
};