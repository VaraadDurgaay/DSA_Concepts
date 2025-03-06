//the brute force consists of 3 pointers
//the optimal soln is to use KADANE's ALGORITHM
#include <bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum{0};
        int maxi=INT_MIN;
        //int start;
        //int end;
        //int ansStart{-1},ansEnd{-1};
        
        for (int i{0};i<nums.size();i++){
            sum+=nums[i];
            /*
            if(sum==0){ //whenever the sum sets to 0 its always a start to new array
                start = i;
            }
            */
            if(sum>maxi){
                maxi=sum;
                /*
                ansStart=Start;
                ansEnd=i;

                */

            }

            else if(sum<0){
                sum=0;
            }
        }
        return maxi;
        
    }
};
// **IMPORTANT**
/*
    if they also ask to print the array which gave the lasrgest sum then look above
*/