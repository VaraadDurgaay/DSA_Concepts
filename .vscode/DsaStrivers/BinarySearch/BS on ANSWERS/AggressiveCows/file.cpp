/*
    REFER THE BOOK FOR THEORY
*/
#include <iostream>
#include <vector>
using namespace std;


bool canweplace(vector<int> &stalls,int dist,int cows){
    int countcows{1},lastcow{stalls[0]};
    for (int i{0};i<stalls.size();i++){
        if (stalls[i]-lastcow >=dist){
            countcows++;
            lastcow=stalls[i];
        }
        if (countcows>=cows)return true;
    }
    return false;
}

int aggressivecows(vector<int> &stalls,int k){
    //k= no of cows
    //the range for bs
    int n = stalls.size();
    int low {1},high{stalls[n-1]-stalls[0]}
    while(low<=high){
        //def mid
        int mid=low+(high-low)/2;
        //if the cows can be placed with the mid distance 
        if (canweplace(stalls,mid,cows)==true){
            ans = mid;
            //as we need to find the max
            low=mid+1;
        }
        else{
            high =mid-1;
        }
    }
    return ans;
}