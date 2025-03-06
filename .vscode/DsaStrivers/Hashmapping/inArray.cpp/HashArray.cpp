#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[8] {1,3,2,1,4,3,5};

    int hash[13]{0};
    for (int i{0};i<8;i++){
        hash[arr[i]]+=1;
    }

    int queries;
    cout<<"Enter the number of queries: ";
    cin>>queries;
    while (queries>0){
        int number;
        cout<<"Enter the number:";
        cin>>number;
        cout<<hash[number]<<endl;
        queries--;
    }

    return 0;
}

//IMPORTANT:
/*
SOMETIMES   the max ekement in array (ie the size) is not same as the 
max element in the hash array . soo to give the max sizze of array to the hash
we need to include some lib 

#include <algorithm>
int max= *max_element(arr.begin(),arr.end());
    vector <int> hash(max+1,0);
    for (int i{0};i<arr.size();i++){
        hash[arr[i]]+=1;

where the arr is the array whose freq is to be recorded

*/