#include <iostream>
#include <vector>
using namespace std;
//first approach is Brute Force
void zeroestoend( vector<int> &arr){
    int n=arr.size();
    vector<int> temp;
    int j{0};
    for(int i{0};i<n;i++){
        if(arr[i]!= 0){
            temp[j]=arr[i];
            j++;
        }

    }
    int stemp = temp.size();
    //after adding non zeroes we will replace the starting of arr with
    //the temp array
    for (int i{0};i<stemp;i++){
        arr[i]=temp[i];
    }
    //now we will replace all the other terms of the arr by 0
    for (int i{stemp};i<n;i++){
        arr[i]=0;
    }

}
int main(){
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    zeroestoend(arr);
    for (auto c:arr){
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}
//optimal approach is to use 2 pointers 

/*
int j{0};
for (int i{0};i<n;i++){
    if ( arr[i]!=0){
    arr[j]=arr[i];
    j++;    
    }
}
*/