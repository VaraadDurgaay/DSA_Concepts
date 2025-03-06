/* 
    In the soln its taken as load+weight[i]>capacity
    -The reason is take EG OF a CAR CAP=100 & weights[30,40,50,30];

    ✅ Correct Approach (load + weight[i] > capacity)

    Day #	Packages|Loaded|Total Load|Check (load + weight[i] > capacity)?|Action
    Day 1	30	    30	    30 + 40 = 70 ≤ 100 ✅ Add	                    Load = 70
    Day 1	30,40	70	    70 + 50 = 120 > 100 ❌ Exceeds!	                Move to Day 2
    Day 2	50	    50	    50 + 30 = 80 ≤ 100 ✅ Add	                    Load = 80
    Day 2	50,30	80	    No more packages left	                          Done
    ✅ Correct Days Taken = 2


 */
//BRUTE FORCE SOLN 
for (int i{*max_element(a.begin(),a.end())};i<=sum_of_all_the_elements(a);i++){
    int daysreq=func(weight,capacity);

    if(daysreq<=days){
        return daysreq;
    }
}
func(vector<int> weight,int capacity){
    int load{0};days{1};
    for (int i{0};i<weight.size();i++){
        if (load+weight[i]>capacity){
            day=day+1;
            load=weight[i];
        }
        else{
            //if its less than capacity then add the weights[i]
            load+=weight[i];

        }
    }
}

//OPTIMAL SOLN IS TO USE BINARY SEARCH AS WE KNOW THE RANGE OF THE ANSWER
//ie (max_element -> sum_of_all_the_elements)
//LEETCODE SOLN
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int func(vector<int> &a, int capacity) {
        int load = 0, days = 1;
        for (int i = 0; i < a.size(); i++) {
            if (load + a[i] > capacity) {
                // Start a new day
                days += 1;
                load = a[i]; // Reset load to current package weight
            } else {
                // Continue loading packages within capacity
                load += a[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());  // Minimum capacity should be at least the max weight
        int high = accumulate(weights.begin(), weights.end(), 0); // Maximum capacity is sum of all weights
        int ans = high; // Initialize ans to the highest possible capacity

        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents overflow
            int daysreq = func(weights, mid);
            
            if (daysreq <= days) {
                ans = mid;  // Store the valid capacity
                high = mid - 1;  // Try to minimize further
            } else {
                low = mid + 1;  // Increase capacity
            }
        }
        return ans;
    }
};
