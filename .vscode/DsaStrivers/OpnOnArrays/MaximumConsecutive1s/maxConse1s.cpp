class Solution {
    //this is the optimal soln which is pretty straight forward
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi{0};
        int count{0};

        for (int i{0};i<nums.size();i++){
            if (nums[i]==1){
                count++;
                maxi=max( maxi,count);
            }
            else {
                count =0;
            }
        }
        return maxi;
        
    }
    

};