class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

    int mid,start=0,end=nums.size()-1, first=-1,last=-1;
    
    //Find First
    while(start<=end){
        
        mid=start+(end-start)/2;
        
        if(nums[mid]==target){
            first=mid;
            end=mid-1;
        }
        
        else if (nums[mid]<target){
            start=mid+1;
        }
        
        else{
            end=mid-1;
        }
        
    }

    //Find last
    start=0,end=nums.size()-1;

    while(start<=end){
        
        mid=start+(end-start)/2;
        
        if(nums[mid]==target){
            last=mid;
            start=mid-1;
        }
        
        else if (nums[mid]<target){
            start=mid+1;
        }
        
        else{
            end=mid-1;
        }
        
    }
    vector<int>ans(2);
    ans[0]=first;
    ans[1]=last;

    return ans;

    }
};

/*
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
 
Constraints:
0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/
