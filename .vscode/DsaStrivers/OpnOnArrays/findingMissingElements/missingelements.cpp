#include <iostream>
#include <vector>
using namespace std;
//brute force approach 

int main(){
    vector<int> arr{1,2,4,5};
    int n=arr.size();
    int num;
    cout<<"input the number till u want: ";
    cin>>num;
    for (int i{0};i<num;i++){
        int flag{0};
        for (int j{0};j<n;j++){
            if (arr[j]==i){
                flag =1;//number is found
                break;
            }
            
        }
        if(flag == 0){
            cout<<i<<endl;;
        }

    }
    return 0;
}
//better is to use hashing 
//varaad you know how to use hashing to store the freq of a number
//the hash size is N+1 ,so that is N is 5 the highest index will be 5
//after storing in the hash the freq then just return index which have zero value stored
//in them 


//And the optimal soln is to sum both the arrays and their difference

//the nest optimal soln (better that the sum ka) is to use XOR
/*
    the opn of xor 
    1^1 = 0;          6^0=6
    2^2=0;
    0^5=5;
    so in this type we will multiply the whole array and the SINGLE numebr eill return 
*/