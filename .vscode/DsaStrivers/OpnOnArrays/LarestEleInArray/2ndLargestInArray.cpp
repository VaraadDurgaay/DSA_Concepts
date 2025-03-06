#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void secondL(vector <int>& arr,int n){
    int largest = arr[0];
    int smallest = -1;

    for (int i{1};i<n;i++){
        if (arr[i]>largest){
            smallest = largest;
            largest = arr[i];
            
        }
        else if( arr[i]<largest && arr[i]>smallest){
            smallest = arr[i];
            
        }
    }cout<<smallest<<endl;
    
}
void secondS( vector<int>& arr, int n){
    // let the array be {1 2 3 4 5 6}
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i{1};i<n;i++){
        if ( arr[i]<smallest){
        ssmallest = smallest;
        smallest = arr[i];
        }
        else if ( arr[i]!= smallest  && arr[i]<ssmallest){
        ssmallest = arr[i];

        }
    }    cout <<ssmallest <<endl;
}

int main(){
    vector <int> arr{2,6,5,9,4,3,1,7,8};
    int n = arr.size();

    secondL(arr,n);
    secondS(arr,n);
    
    


    return 0;
}