#include <iostream>
#include <vector>
using namespace std;

//writing the func to check whether the given dist is poss or not
bool canweplace (vector<int> &a,int dist,int cows){
    int countcows{1},lastcow{a[0]};
    
    for (int i{0};i<a.size();i++){
        if (a[i]-lastcow >=dist){
            countcows++;
            lastcow = a[i];
        }
        if (countcows>=cows)return true;
    }
    return false;
}
int aggressivecows(vector<int> &a,int k){
    //k=is the number of cows
    int n = a.size();
    int low {1},high{a[n-1]-a[0]};
    int ans;
    while (low<=high){
        //def mid
        int mid=(low+high)/2;
        //check whether the mid is poss or not
        if (canweplace(a,mid,k)==true){
            ans=mid;
            //as we need to find the max element
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}