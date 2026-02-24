#include<bits/stdc++.h>
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        
        int a = 0; // 1st player
        int b = 0; // 2nd player
        bool p1 = true;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 != 0 ){
               // b = b + nums[i];
                p1 = !p1;
            }
            if(i % 6 == 5 ){
               // b = b + nums[i];
                p1 = !p1;
            }
            
            if(p1) a = a + nums[i];
            else b = b + nums[i];
        }
        return (a - b);
    }
};