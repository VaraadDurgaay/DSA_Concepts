//by using the Moores voting algo
//refer the book for theory
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count{0};
        int element;
        //finding the majority element 
        for (int i{0};i<nums.size();i++){
            if (count ==0){
                element  = nums[i];
                count++;
            }
            else if(nums[i]!=element){
                count--;
            }
            else if(nums[i]==element){
                count++;
            }
        }
        //checking how many times does the element that we got above appears
        int counter{0};
        for (int i{0};i<nums.size();i++){
            if(nums[i]==element){
                counter++;
            }
        }
        //checking if the no.of.times that element appears is greater than (>) n/2;
        //n is size of the array
        if(counter>(nums.size())/2){
            return element;
        }
        return {};
        
    }
};