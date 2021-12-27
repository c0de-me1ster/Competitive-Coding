/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

// Naive Approach :
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int zeros=0;
        for(auto it:nums){
            if(it!=0) ans.push_back(it);
            else if(it==0){
                zeros++;
            }
        }
        for(int i=0;i<zeros;i++){
            ans.push_back(0);
        }
        nums=ans;
        
    }


// Good Approach: 

public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) nums[z++]=nums[i];
        }
        for(;z<nums.size();++z){
            nums[z]=0;
        }
        
    }
