#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;

    int max = *max_element(s.begin(), s.end());
    vector <int> hash (max-'a'+1,0);

    //frquency table of the characters
    for ( int i{0};i<s.size();i++){
        hash[s[i]-'a']+=1;
    }

    int queries;
    cout<<"Enter the number of queries: ";
    cin>>queries;

    while(queries>0){
        char character;
        cout<<"Enter the character: ";
        cin>>character;
        cout<<hash[character-'a']<<endl;
        queries--;
    }



    return 0;
}