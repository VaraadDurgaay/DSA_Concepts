//in the optimal soln we will use the two pointer approach 
/*
    in this we will have 2 ptr i,j each at {0}pos of each array

*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> unionn(vector<int> &a,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    int i {0},j{0};
    vector<int> ans;
    //arr1 {1,1,2,3,5,6}
    //arr2 {1,2,2,3,4}
    while(i<n1 && j<n2){
        if (a[i]<=b[j]){
            if (ans.empty() || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else {
            if (ans.back()!=b[j] || ans.empty()){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if ( ans.back()!=b[j] || ans.empty()){
            ans.push_back(b[j]);
        }j++;
    }
    while (i<n1){
        if (ans.back()!=a[i] || ans.empty()){
            ans.push_back(a[i]);
        }
        i++;
    }
    
    
    return ans;
}
int main(){
    vector<int> a{1,2,3,3,4,5,9};
    vector<int> b{1,1,1,1,2,3};
    
    vector<int> result =unionn(a,b);
    for (auto c:result){
        cout<<c<<" ";
    } 

    
    return 0;
}