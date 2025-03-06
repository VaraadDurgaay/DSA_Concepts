//in the brute force ill find the max sum from i=0 -> n using a ptr j which will go from i->n
#include <iostream>
#include <vector>
using namespace std;

int maxsum(vector<int> &a){
    int n =a.size();
    int sum=INT_MIN;
    int maxi=INT_MIN;
    for (int i{0};i<n;i++){
        for (int j{i};j<n;j++){
            sum +=a[j];
            maxi = max(sum,maxi);
        }
        
    }
    return maxi;
}
//the optimal soln includes of KADANE;S ALGORITHM
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int> &a,int target){
    int n = a.size();
    int maxi;
    int start,ansstart,ansend;
    for (int i{0};i<n;i++){
        sum +=a[i];
        if (sum==0) {
            start=i;
        }
        if (sum<0){
            sum=0;
        }
        else if (sum>maxi){
            maxi = sum;
            ansstart=start;
            ansend=i;
            //maximum subarray sum 
            

        }

    }
}