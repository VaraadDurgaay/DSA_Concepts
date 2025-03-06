#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> rearranged(vector<int> &a){
    int n = a.size();
    int low{0},mid{0},high{n-1};
    while (low<=high){
        if (a[mid]==0){
            swap(a[low],a[mid]);
            mid++;
            low++;
        }
        else if(a[mid]==1) mid++;
        else if(a[mid]==2){
            swap (a[mid],a[high]);
            high--;
            
        }
    }
}