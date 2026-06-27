class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> hash;
        for (auto i : nums){
            hash[i]++;
        }
        bool dup = false;
        for (auto i : hash) {
            if (i.second > 1) dup = true;
        }
        if (dup) return true;
        else return false;
    }
};