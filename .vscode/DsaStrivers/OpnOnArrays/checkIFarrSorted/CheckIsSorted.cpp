#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int  isSorted(vector<int> &a,int n){
    for(int i{1};i<=n-1;i++){
        if(a[i]>=a[i-1]){

        }
        else {
            return false;
        }
        return true;
        
    }
    return -1;
}
int main(){
    vector<int> a {1,2,4,5,3,6};
    int n=a.size();
    isSorted(a,n);
    for (auto c: a){
        cout<<c<<" ";
    }

    return 0;
}