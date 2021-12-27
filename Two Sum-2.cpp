/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.
*/


// My Solution
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        vector<int> no={-1};
        int l=0;
        int r=numbers.size()-1;
        int sum;
        while(l<r){
            sum=numbers[l]+numbers[r];
            if(sum==target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
            else if(sum<target) l++;
            else if(sum>target) r--;
        }
        return no;
    }
