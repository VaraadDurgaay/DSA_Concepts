//the better soln will be to use a map <int,int>
/*
    which will store the element and the no of times it appears
*/
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

    int majority(vector<int> &a,int n ){
        //n is the size of the array
        map<int,int>mpp;
        for (int i{0};i<n;i++){
            mpp[a[i]]++;//storing the frequency of the element
        }
        for (auto c:mpp){
            if (c.second >n/2){
                return c.first;
            }
        }
        return -1;//returning -1 if no majority element exists
    }

//the optimal soln is to use moores voting algo 
#include <iostream>
#include <vector>
using namespace std;

int  majority(vector<int> &a){
    int n = a.size();
    int element;
    int count{0};
    for (int i{0};i<n;i++){
        if (count==0){
            element = a[i];
            count++;
        }
        else if (a[i]!=element){
            count--;
        }
        else if (a[i]==element){
            count++;
        }
    }
    //checking how many times does that element appears
    int counter{0};
    for (int i{0};i<n;i++){
        if (a[i]==element){
            counter++;
        }
    }
    if (counter>n/2){
        return element;
    }
}
