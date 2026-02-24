class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int Sum = 0;
        for(int i=0; i < nums.size(); i++){
            Sum = Sum + nums[i];
            nums[i] = Sum;
            
        }
        return nums;
    }
};