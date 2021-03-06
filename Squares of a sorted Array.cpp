/* 
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/




Solution 1- 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        vector<int> result(nums.size());
        for(int i=r;i>=0;--i){
           if(abs(nums[l])>abs(nums[r])) result[i]=nums[l]*nums[l++];
            else result[i]=nums[r]*nums[r--];         
        }    
    return result;    
    }
};



Solution 2-
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        for(auto i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());  
    return nums;    
    }
};
