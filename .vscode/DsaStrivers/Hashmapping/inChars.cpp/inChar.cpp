#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    string s{'a','r','a','r','s'};

    int hashing[27]{0};

    //Setting the frequency table
    for(int i{0};i<27;i++){
        hashing[s[i]-'a']++;
    }
    //setting the query request
    cout<<"Enter the number of query u want:";
    int query;
    cin>>query;
    while(query--){
        char character;
        cout<<"enter the character: ";
        cin>>character;
        cout<<hashing[character-'a']<<endl;
    }


    return 0;
}
//for best practice use (refer hashArray.cpp)