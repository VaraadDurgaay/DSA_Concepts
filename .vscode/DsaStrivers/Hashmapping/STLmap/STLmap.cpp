#include <iostream>
#include <map>
using namespace std;

int main(){
    
    //array
    int arr[5]{1,2,5,2,1};

    //prefetch
    map<int, int>mpp;
    for(int i{0};i<5;i++){
        mpp[arr[i]]++;
    }

    //iterating in the map
    cout<<"the first and second"<<endl;
    for(auto c:mpp){
        cout<<c.first<<"=>"<<c.second<<endl;
    }

    //fetch
    int queries{0};
    cout<<"enter the number of queries: ";
    cin>>queries;
    while(queries>0){
        int num;
        cout<<"enter the key;";
        cin>>num;
        cout<<mpp[num]<<endl;

    }
    return 0;
}