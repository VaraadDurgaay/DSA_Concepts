#include <iostream>
#include <vector>
#include <map>
using namespace std;

void missingelement(vector<int> &a,int num){
    //num is the number till which we have to find the missing element
    int n = a.size();
    //we will use the concept of hasharray
    //the array is {3,4,5,6}
    int hasharray[num+1]{0};
    for (int i{0};i<n;i++){
        hasharray[a[i]]+=1;
    }
    for (int i{1};i<=num;i++){
        if (hasharray[i]==0){
            cout<<i<<endl;
            continue;
        }
    }

}
int main(){
    vector<int> a {3,4,5,6};
    missingelement(a,6);
    return 0;
}