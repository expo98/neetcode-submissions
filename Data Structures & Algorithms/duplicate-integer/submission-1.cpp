class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // I'll declare an unordered_set to track seen numbers
        // when a second time return true

        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++){

            if (seen.count(nums[i]) == 0) {
                seen.insert(nums[i]);
            }
            else {
                return true;
            }
        }

        return false;
        
    }
};