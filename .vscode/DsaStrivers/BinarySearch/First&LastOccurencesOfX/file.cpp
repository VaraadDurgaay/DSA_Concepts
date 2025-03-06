//if this we have to return the first starting index and last ending index 
/* **SOLN IF U DONT WANNA USE BSD   
    for eg; in arr[1,2,2,2,2,3,4,5]
    if x=2 therefore the ans is {1,4}
    if x=18 ans {-1,-1}
    if x= 3 ans {5,5}
    Algorithm
    1.let first=-1 & last=-1
    2.Now iterate through the array
    3.if the arr[num]==x then check if first==-1
            3.1.if first==-1 then store the index of arr[num] in first
            3.2.else if first!=-1 {that means already the same number is registered}
                and store the index in last 
*/
/* SOLN IF U WANT TO USE BSD
    we will implementing bsd using lower and upper bound
    in the above array the lower_bound(2) is 2(at idx 1)
    AND the upper_bound(2) is 3 BUT IF WE -1 
    we will get 2(at idx 4)
*/
class Solution {
public:
    int lowerbound(vector<int>& nums,int x){
        
        int n = nums.size();
        int ans {n};
        int low{0},high{n-1};
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=x){
                //you can be my probable ans
                ans = mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
    int upperbound(vector<int>& nums,int x){
        
        int n = nums.size();
        int ans {n};
        int low{0},high{n-1};
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>x){
                //you can be my probable ans
                ans = mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound( nums,target);
        if( lb==n|| nums[lb]!=target)return {-1,-1};
        
        return {lb, upperbound(nums, target) - 1};

    }
};