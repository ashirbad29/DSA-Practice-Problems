// 75.sort colors
// medium
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high) {
            switch(nums[mid]) {
                // if the item is 0
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};