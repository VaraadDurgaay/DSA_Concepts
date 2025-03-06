#include <iostream>
#include <map>
#include <vector>
using namespace std;
//we will directly use the optimal soln becoz thats the easy and u know

int main(){
    vector<int> arr{1,1,2,3,3,4,4,5,5};
    map<int,int>mpp;

    //iterating the array to store the nums of the array into the map

    for (int i{0};i<arr.size();i++){
        mpp[arr[i]]++;
    }
    //print the element which has freq as 1
    /*
    for maps the key is stored in the .first and the freq of that keyword
    is stored in the .second
    */
    for (auto c:mpp){
        if (c.second == 1){
            cout<<c.first<<endl;
        }
    }

    cout<<"soln using XOR"<<endl;
    vector<int> vec{1,1,2,3,3,4,4};
    int XOR{0};
    for (int i{0};i<arr.size();i++){
    XOR = XOR^arr[i];
    
    }
    cout<<XOR<<endl;


    return 0;
}

//the optimal (best) is to use XOR

