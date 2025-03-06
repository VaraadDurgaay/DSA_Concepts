/*
    In piles[]={3,6,7,11} and h=8; and at k=2 banana/hr 
    BEST IS TO REFER THE BOOK
*/

//BRUTE FORCE
int reqtime(vector<int>&a,int hourlu ){
    //i will be the speed banana/hr
    int totalhours{0};
    for (int j{0};j<i;i++){
        totalhours+=ceil(arr[i]/hourly);
    }
    return totalhours;
}
//iterating through the given array for checking the total hours
//and the max value of banana/hr will me at max max(arr.start(),arr.end())
for (int i{0};i<=max(arr.start(),arr.end());i++){
    int requiredtime=reqtime(arr,i);
    if (requiredtime<=h){
        return i;
    }
}

//OPTIMAL SOLUTION
//THE SAME FUNC reqtime(vector<int> &a,int hourly){} will be used
int binarysearch(vector<int> &a,int h){
    //h is the max hour given in the question
    int n = a.size();
    int low{0},high(max(a.start(),a.end()));
    int ans{INT_MAX};
    while(low<=high){
        //def the mid
        int mid = (low+high)/2;
        //using the upper Brute force func 
        int requiredtime=reqtime(a,mid);
        //checking if the requiredtime if </>/== to h
        if (requiredtime<=h){
            //you can be the probable ans
            ans = mid;
            //****NOTE****** as in the question is stated as THE MIN VALUE OF K(banana/hr)
            //therefore we will move LEFT 
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        
    }
    return ans;
}
//ANSWER FOR LEETCODE==========================================

#include <bits/stdc++.h>
class Solution {
public:
    long long reqtime(vector<int> &a, int hourly) {
        long long totalhours = 0; // Use long long to prevent overflow
        for (int i = 0; i < a.size(); i++) {
            totalhours += (a[i] + hourly - 1) / hourly; // Avoid floating-point calculations
        }
        return totalhours;
    }
    int maxim(vector<int>&a){
        int maxi{INT_MIN};
        for (int i{0};i<a.size();i++){
            if (a[i]>=maxi){
                maxi=a[i];
            }
        }
        return maxi;
    }





    int minEatingSpeed(vector<int>& piles, int h) {
        // k will be from 1->max(piles)
        // using bs
        int n = piles.size();
        int low{1}, high{maxim(piles)};
        int ans{high};//ans is k
        while (low <= high) {
            // def mid
            int mid=(low+high)/2;
            int requiredtime=reqtime(piles,mid);
            if (requiredtime<=h){
                //you can be my probable ans
                ans = mid;
                //as we have to find the minimum integer
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};