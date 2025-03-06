//the brute force is to use sum 
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int MAXLENGHT(vector<int> &a,int k){
    int n = a.size();
    int left{0},right{0};
    int maxlen{-1};
    while (right<n){
        while (left <=right && sum>k){
            sum-=a[left];
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        sum+=a[right];
        maxlen=max(maxlen,right-left+1);

    }
}

