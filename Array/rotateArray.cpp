// 189.Rotate a arrray clockwise
// medium


// using reverse algorithm
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

// using extra space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> aux(nums.size());
        for(int i = 0; i < nums.size(); i++) {
        	// place each elements into its correct place after rotation
            aux[(i + k)%nums.size()] = nums[i];
        }
        
        // store the elemenents of aux into nums
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = aux[i];
        }
    }
};