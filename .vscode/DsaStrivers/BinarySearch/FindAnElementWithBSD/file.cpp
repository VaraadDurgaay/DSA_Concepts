#include <iostream>
#include <vector>
using namespace std;




int search(vector<int> &nums, int target) {
    int n = nums.size();
    int low { 0 }, high{ n - 1 };

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) {
            low = mid + 1;
        }
        else if (nums[mid] > target) {
            high = mid - 1;
        }
        
    }
    return -1;
}
//binary search also has a recursive code :
int bs(vector<int> &nums,int low,int high ,int target){
    //the base case
    if (low>high)return -1;
    //mid
    int mid = (low+high)/2;
    if (nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        bs(nums,low,high-1,target);
    }
    return bs(nums,mid+1,high,target);
}






int search(vector<int> &nums, int target) {
    bs(nums,0,nums.size()-1,target);
    return {};
}//thers some sort of error please check