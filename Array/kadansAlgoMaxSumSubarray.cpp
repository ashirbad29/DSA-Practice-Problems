// 53. Maximum Subarray
// Kadana's algo
// Linear solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > maxSum) maxSum = sum;
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};

// quadractic solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for(int j = i; j < nums.size(); j++ ) {
                sum += nums[j];
                if(sum > maxSum) maxSum = sum;
            }
        }
        return maxSum;
    }
};