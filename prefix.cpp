#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};

    int st = 1;
    for(int i = 1; i<nums.size() ; i++){
        if(st != i){
            nums[i] = nums[i-1] * nums[st-1];
            st++;
        }
    }

    for(auto x : nums){
        cout<<x<<endl;
    }

}