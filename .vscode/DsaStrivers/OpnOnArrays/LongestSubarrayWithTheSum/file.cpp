#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int longsubarray(vector<int> &a, long long k);

int main(){
    vector<int> arr{1,2,3,1,1,1,1,4,2,3}
/*
The brute force soln is .......

like if start pt is 1 then 1, 12,123,1231,12311,123111
if start is at 2 then 2,23,231,2311,23111,231111
if start is at 3 then 3,31,311,3111,31111,,,,,

therefore the brute force will be 
for (int i{0};i<arr.size();i++){
    int length{0};
    int sum{0};
    for (int j{i};j<=n-1;j++){
        
            sum += arr[k];
            if(sum==k){
                length = max(length,j-i+1);
                }
            }
        
        
    }
*/
//the optimal soln is to use 2 pointer approach 
/*
the sum will inc as the poionter increments 
and if the sum sum exceed ths val(total addn given) then we will decrement 
another popinter fromleft side*/





    return 0;

}
int longsubarray(vector<int> &a, long long k){
    int left{0},right{0};
    int sum = 0;
    int maxlen=0;
    while(right<n){
        while ( left<=right && sum>k){
            sum -=a[left];
            left++;
        }
        right++;
        sum +=a[right];
        if (sum==k){
            maxlen= max(maxlen,right-left+1);
        }
    }
}
//soln for gfg
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int right = 0, left = 0, sum = 0, maxlen = 0;
        int n = arr.size();
        
        if (n == 0) return 0; // Explicitly handle empty array case

        while (right < n) {
            sum += arr[right]; // Add current element to sum

            while (left <= right && sum > k) {
                sum -= arr[left]; // Shrink window from left
                left++;
            }

            if (sum == k) {
                maxlen = max(maxlen, right - left + 1);
            }

            right++; // Move right pointer forward
        }
        return maxlen;
    }
    
};