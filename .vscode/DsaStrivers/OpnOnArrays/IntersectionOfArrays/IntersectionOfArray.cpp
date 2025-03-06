#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> a{1,2,2,3,3,4,5};
    vector<int> b{1,2,2,2,3,4,5};
    vector<int> visited(b.size(),0);
    vector<int> vec;
    //we will keep a "visited"arr to know which elements is visited in arr b
    // vector<int> a{1,2,2,3,3,4,5};
    // vector<int> b{1,2,2,2,3,4,5};
    for (int i{0};i<a.size();i++){
        for (int j{0};j<b.size();j++){

            if (a[i]==b[j] && visited[j]==0){
                vec.push_back(a[i]);
                visited[j]=1;
                break;
            }
            if( b[j]<a[i]){
                break;
            }
        }
    }
    
    for (int i{0};i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    return 0;
}