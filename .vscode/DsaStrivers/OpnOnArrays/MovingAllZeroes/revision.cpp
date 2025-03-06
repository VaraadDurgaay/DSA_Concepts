//in the optimal approach we use two pointer approach 
//we will use ptr i,j and iterate through it we we get 0 we will keep j ptr on xero 
//and continue the iteratioin until we find the non zero number then jsu;t swap
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> movezeroes(vector<int> &a){
    int n = a.size();
    int j {-1};
    for (int i {0};i<n;i++){
        if (a[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1)return a ;
    for (int i{j+1};i<n;i++){
        if (a[i]!=0){
            swap (a[j],a[i]);
            j++;
        }
    }
    return a;
}
int main(){
    vector<int> f{1,2,0,3,0,2,0};
    movezeroes(f);
    for (auto c:f){
        cout<<c<<" ";
    }
    return 0;
}