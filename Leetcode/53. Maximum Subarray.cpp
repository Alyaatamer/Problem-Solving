class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int size = nums.size();

        for(int i = 0 ; i<size ; i++){
            int sum = 0;
           for(int j = i ; j<size ; j++){
                sum += nums[j];
                maxsum = max(maxsum,sum);
           }
        }
        return maxsum;
    }
};