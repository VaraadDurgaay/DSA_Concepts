#include <iostream>
#include <set>
#include <vector>
using namespace std;
//brute force soln 
/*
/brute force is to use a set as a set only stores unoque elements
*/
int main(){
    
    vector<int> arr1  {1,4,3,6,7};
    
    vector<int> arr2  {1,4,9,8};
    set <int> st;
    for (int i{0};i<arr1.size();i++){
        st.insert(arr1[i]);
    }
    for (int i{0};i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    vector<int> unionn;
    for (auto c:st){
        unionn.push_back(c);

    }
    for (auto c: unionn){
        cout<<c<<" ";
    }
    

    

    return 0;
}

//more optimum soln is to use 2 pointers 
/*

vector<int> unionarr;
int n1 = a.size();
int n2 = ab.size();
int i{0};
int j {0};
while ( i<n1 && j<n2){

    if (a[i]<=b[j]){
        if (unionarr.back != a[i]){
            unionarr.push_back(a[i]);
            }
        }i++;

    }
    else { 
        if (unionarr.size()==0 || unionarr.back!=b[j]){
            unionarr.push_back(b[j]);
        }
        j++;
    }

    //also if i gets finished iterating but still j is remaining then;

    while (j<n2){
        if (unionarr.size()==0 || unionarr.back!=b[j]){
            unionarr.push_back(b[j]);
        }
        j++;
    }
    //ALSO SAME FOR IF J GETS EXHAUSTED AND I IS REMAINING
    while (i<n1){
        if (unionarr.size()==0 || unionarr.back!=b[j]){
            unionarr.push_back(b[j]);
        }
        i++;
    }
*/