//REFER THE BOOK FOR THE THEORY 
//PSEUDO CODE FOR BINARY SEARCH
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &a,int threshold){
    int n = a.size();
    int low{0},high{n-1};
    if(n>threshold)return -1;
    while(low<=high){
        //def the mid
        int mid=(low+high)/2;
        //checking if the sum at mid is <=threshold
        if(sum_of_prod(a,mid)<=threshold){
            //this can be my probable ans
            ans = mid;
            //as we have to find the minimum element THEREFORE
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int sum_of_prod(vector<int> &a,int x){
    int sum{0};
    for (int i{0};i<a.size();i++){
        sum += ceil((double)a[i]/(double)x);
    }
    return sum;
}
//LEETCODE SOLUTION FOR ITS QUESTION
#include <bits/stdc++.h>

class Solution {
public:
    int sum_of_prod(vector<int>& a, int div) {
        int sum{0};
        for (int i{0}; i < a.size(); i++) {
            sum += (a[i] + div - 1) / div;

        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low{1}, high{*max_element(nums.begin(), nums.end())};
        int ans{high};
        while (low <= high) {
            // def mid
            int mid = low + (high - low) / 2;

            if (sum_of_prod(nums, mid) <= threshold) {
                ans = mid;
                // as we need to find the SMALLEST DIVISOR
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};