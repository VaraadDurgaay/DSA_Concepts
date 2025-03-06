#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//brute force : using two pointers
int main(){
    int num;
    cout<<"enter the number till what you want to find: ";
    cin>>num;

    vector<int> a {1,2,3,5,6,7};
    //the missing number is 4
    int n = a.size();

    for (int i{1};i<=num;i++){
        int flag{0};
        for (int j{0};j<n;j++){
            if (a[j]==i){
                flag=1;
                break;
                //number found
            }

        }if (flag == 0){
            //that number is missing
            cout<<"the missing number is: "<<i<<endl;
        }
    }


    return 0;
}
//BETTER IS TO USE HASHMAP
int missingelement(vector<int> &a,int k){
    int n = a.size();
    //k is the number till we want to find the missing number
    unordered_map<int,int> map;
    for (int i{0};i<n;i++){
        map[a[i]]++;
    }
    for (int i{1};i<=k;i++){
        if(map.find(i)==map.end()){
            return i;
        }
    }
    return -1;
}