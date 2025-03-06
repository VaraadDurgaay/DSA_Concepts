/*
    for brute force a[i]==a[i-1] || a[i]==a[i+1]
*/
//BRUTE FORCE
#include <iostream>
#include <vector>
using namespace std;

int singleelement(vector<int> &a){
    int n = a.size();
    for (int i{1};i<n-1;i++){
        if (a[i]==a[i-1] || a[i]==a[i+1]){
            //do nothing to continue to iteration
        }
        else{
            return a[i];
        }
    }
    return -1;
}
int main(){
    vector<int> a {1,1,2,2,3,3,4,5,5};
    cout<<singleelement(a)<<endl;
    return 0;
}