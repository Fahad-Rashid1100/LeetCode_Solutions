class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> map;
        

        for(int i = 0 ; i < nums.size() ; i++) {
            map[nums[i]]++;
        }

        int max = 0;

        for(auto i = map.begin() ; i != map.end() ; i++) {
            if(i->second > max) {
                max = i->second;
            }
        }

        vector<int> arr[max+1];

        for(auto i = map.begin() ; i != map.end() ; i++) {
            arr[i->second].push_back(i->first);
        }

        vector<int> v;
        int k1 = k;
        for(int i = max ; i >= 0 ; i--) {
            if(k != 0) {
                if(arr[i].size() == 1) {
                    v.push_back(arr[i][0]);
                    k--;
                }
                else if(arr[i].size() == 0) {
                    continue;
                }
                else {
                    v.insert(v.end(), arr[i].begin(), arr[i].end());
                }
            
                
            }
            if(k == 0) {
                break;
            }
        }

        vector<int> res;

        for(int i = 0 ; i < k1 ; i++) {
            res.push_back(v[i]);
        }

        return res;

    }
};