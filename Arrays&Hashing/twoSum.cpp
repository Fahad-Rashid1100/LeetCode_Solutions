class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> v;
        int compliment = 0;

        for(int i = 0 ; i < nums.size() ; i++) {
            compliment = target - nums[i];
            if(map.find(compliment) != map.end()) {
                v.push_back(map[compliment]);
                v.push_back(i);
                return v;
            }
            else {
                map[nums[i]] = i;
            }
        }

        return v;
    }
};