// problem - 287. Find the Duplicate Number
// Link - https://leetcode.com/problems/find-the-duplicate-number/
// dificulty - medium

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // hare and tortoise method
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];          // moving 1 unit at a time
            fast = nums[nums[fast]];    // moving 2 unit at a time
        } while(slow != fast);
        
        fast = nums[0];
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};