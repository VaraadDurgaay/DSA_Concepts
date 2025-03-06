#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &a){
    int n = a.size();
    for (int i{1};i<n;i++){
        if (a[i]>a[i-1]){
            cout<<"sorted"<<endl;
        }
        else{
            
            return false;
            break;
        }
    }
    return true;
}
int main(){
    vector<int> a{1,2,3,6,5};
    cout<<isSorted(a)<<endl;
    return 0;
}