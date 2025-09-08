class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int current = nums[0];
        int size = nums.size();

        for(int i = 1 ; i<size ; i++){
            current= max(nums[i],nums[i]+current);
            maxsum = max(maxsum,current);
        }
        return maxsum;
    }
};