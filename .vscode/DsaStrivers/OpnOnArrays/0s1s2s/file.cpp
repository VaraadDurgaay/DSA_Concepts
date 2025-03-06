//in this the array will be given which consists only 0,1,2
/*
    We will be using the DUTCH NATIONAL FLAG ALGORITHM which is very easy 
    refer book for the same which is written in depth
*/
#include <bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low{0};
        int mid{0};
        int n = nums.size();
        int high{n-1};
        while (mid<=high){
            if (nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if( nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        
        }
        
    }
};