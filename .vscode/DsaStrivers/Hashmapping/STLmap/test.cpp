#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    //defining the vector
    vector <int> vec{1,4,2,1,2,6,4,2};

    //defining the map
    map <int , int> mpp;
    for (int i{0};i<vec.size();i++){
        mpp[vec[i]]++;
    }

    //printing the map
    for ( auto c:mpp){
        cout<<c.first<<"=>"<<c.second<<endl;
    }

    //fetching the queries 
    int q{0};
    cout<<"enter the number of queries: ";
    cin>>q;

    while(q>0){
        int num;
        cout<<"enter the key/number: ";
        cin>>num;
        cout<<mpp[num]<<endl;
    }


    return 0;
}