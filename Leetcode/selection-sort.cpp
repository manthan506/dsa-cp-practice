class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        // Traverse the array
        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in the unsorted array
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[min_idx]) {
                    min_idx = j;
                }
            }
            // Swap the found minimum element with the first element of the unsorted part
            if (min_idx != i) {
                swap(nums[i], nums[min_idx]);
            }
        }
        return nums;
    }
};