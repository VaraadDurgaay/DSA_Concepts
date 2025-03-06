//the optimal soln is to use 2 pointer approach
#include <iostream>
#include <vector>
using namespace std;

/*
HERE YOU WILL GET A LOGICAL ERROR 
--------BECAUSE THE ARRAY IS NOT SORTED------------------

================WE NEED TO SORT THE ARRAY TO GET THE CORRECT PROPER OUTPUT==========================
*/

int main(){
    vector<int> a{1,1,2,3,2,4};
    int i{0};//as the first element will always be unique
    int n = a.size();
    for (int j{1};j<n;j++){
         if (a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    //printing the array
    for (auto c:a){
        cout<<c<<" ";
    }

    return 0 ;
}