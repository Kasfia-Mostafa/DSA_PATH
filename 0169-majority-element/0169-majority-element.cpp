class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (nums[i] == ans) {  // Fixed this condition
                freq++;
            } else {
                freq--;
            }
        }

        int count = 0;
        for (int val : nums) {
            if (val == ans) {
                count++;
            }
        }
        
        // Fixed the syntax here - proper if-else statement
        if (count > nums.size() / 2) {
            return ans;
        } else {
            return -1;
        }
    }
};