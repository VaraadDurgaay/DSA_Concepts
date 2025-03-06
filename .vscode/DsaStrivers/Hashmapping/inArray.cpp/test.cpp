#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> arr{0};
    int nos;
    cout<<"Enter the number of elements: ";
    cin>>nos;
    while(nos>0){
        int number;
        cout<<"Enter the number: ";
        cin>>number;
        arr.push_back(number);
        nos--;
    }
    

    int max= *max_element(arr.begin(),arr.end());
    vector <int> hash(max+1,0);
    for (int i{0};i<arr.size();i++){
        hash[arr[i]]+=1;
    }
    int queries;
    cout<<"enter the number of queries: ";
    cin>>queries;
    while (queries>0){
        int number;
        cout<<"Enter the number: ";
        cin>>number;
        cout<<hash[number]<<endl;
        queries--;
    }
    return 0;

}