#include <iostream>
#include <set>
#include <vector>
using namespace std;
//BRUTE FORCE APPROACH TO REMOVE DUPLICATES

int main(){

    vector<int> arr = {1, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8, 8, 9};

    set<int> st;
    for (int i{0};i<arr.size();i++){
        st.insert(arr[i]);
    }
    //replacing the starting elements with the unique elements
    int index{0};
    for (auto i:st){
        arr[index]=i;
        index++;
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }//we are using the index because we have to print only the unique elements
    cout << endl;

    return 0;
}

//OPTIMAL APPROACH TO REMOVE DUP;ICATES
